#include "AedInstruction.h"

AedInstruction::AedInstruction(QObject *parent)
    : QObject(parent), currentStep(0), cycles(0) , state(AedStates::SUCCESS),instructionTimer(new QTimer(this)) {
    instructionTimer->setInterval(stepDuration);
    connect(instructionTimer, &QTimer::timeout, this, &AedInstruction::proceedToNextStep);
}

void AedInstruction::setState(AedStates aState) {
    state = aState;
}

void AedInstruction::startInstructionCycle() {
    currentStep = 1; // Start with step 1
    cycles = 0;
    instructionTimer->start();
    emit updateStepDisplay("Step 1: Check responsiveness");
    emit highlightStep(currentStep);
}

void AedInstruction::proceedToNextStep() {
    if (currentStep < totalSteps) {
        ++currentStep;
        QString stepMessage = QString("Step %1: ").arg(currentStep);

        switch (currentStep) {
        case 2:
            stepMessage += "Call for help";
            break;
        case 3:
            stepMessage += "Apply pads, analyzing..";
            if (state == AedStates::NON_SHOCKABLE) {
                emit updateStepDisplay(stepMessage);
                emit highlightStep(currentStep);
                QTimer::singleShot(1500, this, [this]() {
                    emit updateStepDisplay("No rhythm, attempting again");
                });
                QTimer::singleShot(2000, this, [this]() {
                    emit attemptRescue();
                });
                return; // Early return to prevent further steps
            } else {
                emit detectHeartBeat();
            }
            break;
        case 4:
            instructionTimer->stop(); // Step 4 waits for user action
            stepMessage += "Press shock when ready";
            emit makeStatusLightsRed();
            break;
        case 5:
            stepMessage = "Continue compressions";
            emit updateStepDisplay(stepMessage);
            emit highlightStep(currentStep);

            // If the current state is WEAK_COMPRESSIONS, add an additional message after a delay
            if (state == AedStates ::WEAK_COMPRESSIONS) {
                QTimer::singleShot(1000, this, [this]() {
                    emit updateStepDisplay("Press harder");
                });
            }

            // Schedule to move back to step 3 after 2 seconds
            QTimer::singleShot(2000, this, [this]() {
                ++cycles;
                if (cycles <= 2) {
                    currentStep = 3;
                    proceedToNextStep();
                } else {
                    // All cycles are complete, reset everything
                    currentStep = 0;
                    cycles = 0;
                    emit highlightStep(0);
                    emit updateStepDisplay("Patient is now good. Move to resting position");
                }
            });
            return; // Return here to avoid emitting signals again at the end of the function
        }

        // For steps other than step 5
        emit updateStepDisplay(stepMessage);
        emit highlightStep(currentStep);

    }
}
