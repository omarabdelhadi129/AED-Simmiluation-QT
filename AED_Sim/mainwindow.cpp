#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , selfTest(new SelfTest(this))
    , aedInstruction(new AedInstruction(this))
    , shockButton(new ShockButton(this))
    , selfTestInProgress(false)
    , isOn(false)
{
    ui->setupUi(this);

    // Add all lights to an array
    statusLights << ui->statusLight1
                 << ui->statusLight2
                 << ui->statusLight3
                 << ui->statusLight4
                 << ui->step1Light
                 << ui->step2Light
                 << ui->step3Light
                 << ui->step4Light
                 << ui->step5Light;

    // Handeling lights flashing
    flashingTimer = new QTimer(this);
    flashingTimer->setInterval(500);
    connect(flashingTimer, &QTimer::timeout, this, [this](){
        if (currentLightColor == Yellow) {
            toggleStatusLights(White, statusLights);
            currentLightColor = White;
        } else if (currentLightColor == White) {
            toggleStatusLights(Yellow, statusLights);
            currentLightColor = Yellow;
        }
    });

    // Connected ON button
    connect(ui->onButton, &QPushButton::pressed, this, &MainWindow::handleOnButtonPressed);
    connect(ui->onButton, &QPushButton::released, this, &MainWindow::handleOnButtonReleased);

    //Connect test case buttons
    connect(ui->normalButton, &QPushButton::clicked, this, [this]() {
        selfTest->getTestCase()->setCurrentTest(AedStates::SUCCESS);
        setTestButtonClicked(1);
    });
    connect(ui->nonShockableButton, &QPushButton::clicked, this, [this]() {
        selfTest->getTestCase()->setCurrentTest(AedStates::NON_SHOCKABLE);
        setTestButtonClicked(2);
    });
    connect(ui->batteryButton, &QPushButton::clicked, this, [this]() {
        selfTest->getTestCase()->setCurrentTest(AedStates::BATTERY);
        setTestButtonClicked(3);
    });
    connect(ui->weekCompressionButton, &QPushButton::clicked, this, [this]() {
        selfTest->getTestCase()->setCurrentTest(AedStates::WEAK_COMPRESSIONS);
        setTestButtonClicked(4);
    });


    // Test started signal
    connect(selfTest, &SelfTest::testStarted, this, [this](){
        updateStatusDisplay("SELF TEST", "e7f579");
        currentLightColor = Yellow;
        flashingTimer->start(); // Start flashing
    });

    //Test completeed signal
    connect(selfTest, &SelfTest::testCompleted, this, [this](AedStates result){
        onSelfTestCompleted(result);
        flashingTimer->stop(); // Stop the flashing

        //If test passed .i.e no battery issue
        if (result != AedStates::BATTERY){
            toggleStatusLights(White, statusLights);
            currentLightColor = White;
            updateCheckMark(true);
            // Start cycle 2 seconds later
            QTimer::singleShot(2000, this, [this]() {
                aedInstruction->setState(selfTest->getTestCase()->getCurrentTest());
                aedInstruction->startInstructionCycle();
            });
        //If test failed
        } else {
            toggleStatusLights(Red, statusLights);
            currentLightColor = Red;
            updateCheckMark(false);
        }
    });

    // Connect AedInstruction signals to MainWindow slots
    connect(aedInstruction, &AedInstruction::updateStepDisplay, this, [this](const QString& message) {
        // Update the status display and console log with the message color green for good patient
        QString colorHex = (message == "Patient is now good. Move to resting position") ? "008007" : "e7f579";
        updateStatusDisplay(message, colorHex);
        // Log the message to the system voice console aswell
        logVoiceMessage(message);
    });

    // Connect AedInstruction failed rythm slot
    connect(aedInstruction, &AedInstruction::attemptRescue, this, [this]() {
        updateStatusDisplay("NO SHOCKABLE RYTHM", "ff2600");
        logVoiceMessage("FAIL Non shockable rhythm, Please call for help");
        toggleStatusLights(Red, statusLights);
        currentLightColor = Red;
        updateCheckMark(false);
    });

    //Connect shock button activation slot
    connect(aedInstruction, &AedInstruction::makeStatusLightsRed, this, [this]() {
        QList<QPushButton*> statusLights = { ui->statusLight1, ui->statusLight2, ui->statusLight3, ui->statusLight4 };
        toggleStatusLights(Red, statusLights);
    });

    // Connect step lights
    connect(aedInstruction, &AedInstruction::highlightStep, this, &MainWindow::highlightStep);

    // Connect ShockButtonHandler signal to MainWindow slot
    connect(shockButton, &ShockButton::shockDelivered, this, &MainWindow::onShockDelivered);

    // Connect shock button click to ShockButtonHandler slot
    connect(ui->shockButton, &QPushButton::clicked, shockButton, &ShockButton::handleShockButtonPressed);
}

void MainWindow::handleOnButtonPressed() {
    if (isOn == false){
        //Styling the on button when pressed
        ui->onButton->setProperty("pressed", true);
        ui->onButton->style()->unpolish(ui->onButton);
        ui->onButton->style()->polish(ui->onButton);
        ui->onButton->update();

        QTimer::singleShot(1000, this ,[this]() { //change in testing
            if (ui->onButton->isDown()) { // Check if the button is still pressed
                performSelfTest();
                isOn = true;
                //Styling the on button
                ui->onButton->setProperty("pressed", false);
                ui->onButton->style()->unpolish(ui->onButton);
                ui->onButton->style()->polish(ui->onButton);
                ui->onButton->update();

            }
        });
    } else {
        //Turning off the AED
        isOn = false;
        selfTestInProgress = false;
        logVoiceMessage("AED turned off");
        selfTest->getTestCase()->setCurrentTest(AedStates::SUCCESS);
        resetDisplays();
    }
}

void MainWindow::handleOnButtonReleased() {
    // Reset button styles
    if (!isOn){
        logVoiceMessage("Hold for 5 seconds to start...");
    }
    ui->onButton->setProperty("pressed", false);
    ui->onButton->style()->unpolish(ui->onButton);
    ui->onButton->style()->polish(ui->onButton);
    ui->onButton->update();
}

void MainWindow::toggleStatusLights(LightColor color, const QList<QPushButton*>& lights) {
    QString colorStyle;
    switch (color) {
    case Yellow: colorStyle = "yellow"; break;
    case Red: colorStyle = "red"; break;
    default: colorStyle = "white"; break;
    }

    for (auto* light : lights) {
        light->setProperty("status", colorStyle);
        light->style()->unpolish(light);
        light->style()->polish(light);
        light->update();
    }
}

void MainWindow::updateCheckMark(bool status){
    ui->checkMark->setProperty("on", QVariant());
    ui->xMark->setProperty("on", QVariant());
    if (status){
        ui->checkMark->setProperty("on", true);
        ui->checkMark->style()->unpolish(ui->checkMark);
        ui->checkMark->style()->polish(ui->checkMark);
        ui->checkMark->update();
    } else {
        ui->xMark->setProperty("on", true);
        ui->xMark->style()->unpolish(ui->xMark);
        ui->xMark->style()->polish(ui->xMark);
        ui->xMark->update();
    }
}

void MainWindow::performSelfTest() {
    if (!selfTestInProgress) {
        logVoiceMessage("AED turned on");
        logVoiceMessage("Self test starting... ");
        selfTest->startTest();
        selfTestInProgress = true;
    }
}

void MainWindow::onSelfTestCompleted(AedStates result) {
    if (isOn && selfTestInProgress){
        switch (result) {
            case AedStates::SUCCESS:
                updateHeartbeatDisplay("__/\\_/\\___/\\__/\\____/\\_/\\______/\\_____");
                updateStatusDisplay("READY", "008007");
                logVoiceMessage("Self-test completed successfully.");
                selfTestInProgress = false;
                state = AedStates::SUCCESS;
                break;
            case AedStates::BATTERY:
                updateStatusDisplay("BATTERY DEAD", "ff2600");
                logVoiceMessage("FAIL Battery is dead, Please change and restart AED");
                selfTestInProgress = false;
                state = AedStates::BATTERY;
                break;
            case AedStates::NON_SHOCKABLE:
                // Handle the NON_SHOCKABLE case
                updateHeartbeatDisplay("__/\\_/\\___/\\__/\\____/\\_/\\______/\\_____");
                updateStatusDisplay("READY", "008007");
                logVoiceMessage("Self-test completed successfully.");
                selfTestInProgress = false;
                state = AedStates::NON_SHOCKABLE;
                break;
            case AedStates::WEAK_COMPRESSIONS:
                // Handle the WEAK_COMPRESSION case
                updateHeartbeatDisplay("__/\\_/\\___/\\__/\\____/\\_/\\______/\\_____");
                updateStatusDisplay("READY", "008007");
                logVoiceMessage("Self-test completed successfully.");
                selfTestInProgress = false;
                state = AedStates::WEAK_COMPRESSIONS;
                break;
        }
    }
}

void MainWindow::updateStatusDisplay(const QString& message, const QString& colorHex) {
    ui->statusDisplay->setText(message);
    ui->statusDisplay->setStyleSheet(
        "font-size: 42pt;"
        "font-weight: 700;"
        "color: #" + colorHex + ";"
        );
    ui->statusDisplay->setAlignment(Qt::AlignCenter);
}



void MainWindow::updateHeartbeatDisplay(const QString& rhythm) {
    // Update the heartbeat display with the rhythm
    ui->heartBeatDisplay->setText(rhythm);
    ui->heartBeatDisplay->setStyleSheet(
        "font-size: 36pt;"
        "font-weight: 400;"
        "color: #008007"
        );
    ui->heartBeatDisplay->setAlignment(Qt::AlignCenter);
}

void MainWindow::resetDisplays(){
    //Displays
    updateHeartbeatDisplay("");
    updateStatusDisplay("OFF", "ff2600");
    //Lights
    toggleStatusLights(White, statusLights);
    //Check and x mark:
    ui->checkMark->setProperty("on", false);
    ui->checkMark->style()->unpolish(ui->checkMark);
    ui->checkMark->style()->polish(ui->checkMark);
    ui->checkMark->update();
    ui->xMark->setProperty("on", false);
    ui->xMark->style()->unpolish(ui->xMark);
    ui->xMark->style()->polish(ui->xMark);
    ui->xMark->update();
    //Test case buttons
    ui->normalButton->setProperty("on", false);
    ui->nonShockableButton->setProperty("on", false);
    ui->batteryButton->setProperty("on", false);
    ui->weekCompressionButton->setProperty("on", false);

    // Reapply styles for all buttons
    ui->nonShockableButton->style()->unpolish(ui->nonShockableButton);
    ui->nonShockableButton->style()->polish(ui->nonShockableButton);
    ui->nonShockableButton->update();

    ui->batteryButton->style()->unpolish(ui->batteryButton);
    ui->batteryButton->style()->polish(ui->batteryButton);
    ui->batteryButton->update();

    ui->weekCompressionButton->style()->unpolish(ui->weekCompressionButton);
    ui->weekCompressionButton->style()->polish(ui->weekCompressionButton);
    ui->weekCompressionButton->update();

    ui->normalButton->style()->unpolish(ui->normalButton);
    ui->normalButton->style()->polish(ui->normalButton);
    ui->normalButton->update();


}

void MainWindow::setTestButtonClicked(int buttonIndex) {
    // Reset all styles
    ui->normalButton->setProperty("on", false);
    ui->nonShockableButton->setProperty("on", false);
    ui->batteryButton->setProperty("on", false);
    ui->weekCompressionButton->setProperty("on", false);

    switch (buttonIndex) {
        case 1:
            ui->normalButton->setProperty("on", true);
            break;
        case 2:
            ui->nonShockableButton->setProperty("on", true);
            break;
        case 3:
            ui->batteryButton->setProperty("on", true);
            break;
        case 4:
            ui->weekCompressionButton->setProperty("on", true);
            break;
    }

    // Reapply styles for all buttons
    ui->nonShockableButton->style()->unpolish(ui->nonShockableButton);
    ui->nonShockableButton->style()->polish(ui->nonShockableButton);
    ui->nonShockableButton->update();

    ui->batteryButton->style()->unpolish(ui->batteryButton);
    ui->batteryButton->style()->polish(ui->batteryButton);
    ui->batteryButton->update();

    ui->weekCompressionButton->style()->unpolish(ui->weekCompressionButton);
    ui->weekCompressionButton->style()->polish(ui->weekCompressionButton);
    ui->weekCompressionButton->update();

    ui->normalButton->style()->unpolish(ui->normalButton);
    ui->normalButton->style()->polish(ui->normalButton);
    ui->normalButton->update();

}

void MainWindow::onShockDelivered() {
    // Handle the shock delivery UI update
    logVoiceMessage("RING! RING! CLEAR");
    logVoiceMessage("SHOCKED");
    QList<QPushButton*> statusLights = { ui->statusLight1, ui->statusLight2, ui->statusLight3, ui->statusLight4 };
    toggleStatusLights(White, statusLights);
    aedInstruction->proceedToNextStep(); // Continue the instruction cycle after shock delivery
}

void MainWindow::highlightStep(int stepIndex) {
    QList<QPushButton*> steps = {ui->step1Light, ui->step2Light, ui->step3Light, ui->step4Light, ui->step5Light};

    // Clear highlight from all steps
    for (QPushButton* stepButton : steps) {
            stepButton->setProperty("status", "white");
            stepButton->style()->unpolish(stepButton);
            stepButton->style()->polish(stepButton);
            stepButton->update();
    }

    // Check that the step index is within the range of the steps list
    if (stepIndex >= 1 && stepIndex <= steps.size()) {
            // Convert from 1-based to 0-based index
            QPushButton* currentStepButton = steps.at(stepIndex - 1);

            // Create a list with just the one step button to highlight
            QList<QPushButton*> highlightList = {currentStepButton};

            // Highlight the current step
            toggleStatusLights(Yellow, highlightList);
    }
}


void MainWindow::logVoiceMessage(const QString& message) {
    // Log messages to the console display
    ui->consoleText->appendPlainText(message);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// add ecg reports
