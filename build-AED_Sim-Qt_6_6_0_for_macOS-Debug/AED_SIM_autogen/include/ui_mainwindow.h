/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *systemDisplay;
    QPushButton *statusLight4;
    QPushButton *shockButton;
    QTextEdit *statusDisplay;
    QPushButton *onButton;
    QPushButton *statusLight3;
    QPushButton *statusLight1;
    QPushButton *statusLight2;
    QPushButton *checkMark;
    QPushButton *xMark;
    QTextEdit *elevatorNumber_2;
    QTextEdit *heartBeatDisplay;
    QGroupBox *systemDisplay_2;
    QPushButton *normalButton;
    QPushButton *nonShockableButton;
    QPushButton *weekCompressionButton;
    QPushButton *batteryButton;
    QPushButton *upButton_6;
    QPushButton *upButton_7;
    QPushButton *upButton_8;
    QPushButton *upButton_9;
    QPushButton *step1Light;
    QPushButton *step5Light;
    QPushButton *step2Light;
    QPushButton *step4Light;
    QGroupBox *consoleView;
    QPlainTextEdit *consoleText;
    QPushButton *upButton_10;
    QPushButton *step3Light;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1029, 786);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        systemDisplay = new QGroupBox(centralwidget);
        systemDisplay->setObjectName("systemDisplay");
        systemDisplay->setGeometry(QRect(0, -30, 1031, 771));
        systemDisplay->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    background-color: rgb(224, 255, 233);\n"
"    color: black;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin; /* This property is used to align the title within the margin area */\n"
"    subcontrol-position: top center; /* This aligns the title to the top center */\n"
"    padding: 0px 0px; /* Adjust the padding as needed */\n"
"}\n"
""));
        systemDisplay->setAlignment(Qt::AlignCenter);
        systemDisplay->setFlat(false);
        statusLight4 = new QPushButton(systemDisplay);
        statusLight4->setObjectName("statusLight4");
        statusLight4->setGeometry(QRect(540, 500, 31, 31));
        statusLight4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        statusLight4->setIconSize(QSize(42, 42));
        shockButton = new QPushButton(systemDisplay);
        shockButton->setObjectName("shockButton");
        shockButton->setGeometry(QRect(420, 540, 151, 121));
        shockButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 0, 0, 0.8);\n"
"border: none;\n"
"color: black;\n"
"padding: 15px 32px;\n"
"text-align: center;\n"
"text-decoration: none;\n"
"display: inline-block;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"border: 1px solid black;\n"
"box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"border-radius: 12px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/public/shockButton.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        shockButton->setIcon(icon);
        shockButton->setIconSize(QSize(100, 100));
        statusDisplay = new QTextEdit(systemDisplay);
        statusDisplay->setObjectName("statusDisplay");
        statusDisplay->setGeometry(QRect(300, 330, 401, 151));
        statusDisplay->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;"));
        onButton = new QPushButton(systemDisplay);
        onButton->setObjectName("onButton");
        onButton->setGeometry(QRect(920, 40, 71, 61));
        onButton->setStyleSheet(QString::fromUtf8("QPushButton#onButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    background-size: cover;\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"}\n"
"\n"
"QPushButton#onButton[pressed=\"true\"] {\n"
"    border: 2px solid yellow;\n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/public/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        onButton->setIcon(icon1);
        onButton->setIconSize(QSize(42, 42));
        statusLight3 = new QPushButton(systemDisplay);
        statusLight3->setObjectName("statusLight3");
        statusLight3->setGeometry(QRect(500, 500, 31, 31));
        statusLight3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        statusLight3->setIconSize(QSize(42, 42));
        statusLight1 = new QPushButton(systemDisplay);
        statusLight1->setObjectName("statusLight1");
        statusLight1->setGeometry(QRect(420, 500, 31, 31));
        statusLight1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        statusLight1->setIconSize(QSize(42, 42));
        statusLight2 = new QPushButton(systemDisplay);
        statusLight2->setObjectName("statusLight2");
        statusLight2->setGeometry(QRect(460, 500, 31, 31));
        statusLight2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        statusLight2->setIconSize(QSize(42, 42));
        checkMark = new QPushButton(systemDisplay);
        checkMark->setObjectName("checkMark");
        checkMark->setGeometry(QRect(10, 40, 81, 61));
        checkMark->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    background-color: white;\n"
"    background-size: cover;\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"    border: 2px solid transparent;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"    border: 4px solid green; \n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/public/check.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        checkMark->setIcon(icon2);
        checkMark->setIconSize(QSize(60, 60));
        xMark = new QPushButton(systemDisplay);
        xMark->setObjectName("xMark");
        xMark->setGeometry(QRect(100, 40, 81, 61));
        xMark->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"    background-color: white;\n"
"    background-size: cover;\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"    border: 2px solid transparent;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"    border: 4px solid red; \n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/public/xmarkTran.png"), QSize(), QIcon::Normal, QIcon::Off);
        xMark->setIcon(icon3);
        xMark->setIconSize(QSize(60, 60));
        elevatorNumber_2 = new QTextEdit(systemDisplay);
        elevatorNumber_2->setObjectName("elevatorNumber_2");
        elevatorNumber_2->setGeometry(QRect(-60, 640, 221, 101));
        elevatorNumber_2->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;\n"
"background-color: transparent;"));
        heartBeatDisplay = new QTextEdit(systemDisplay);
        heartBeatDisplay->setObjectName("heartBeatDisplay");
        heartBeatDisplay->setGeometry(QRect(200, 40, 641, 81));
        heartBeatDisplay->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;"));
        systemDisplay_2 = new QGroupBox(systemDisplay);
        systemDisplay_2->setObjectName("systemDisplay_2");
        systemDisplay_2->setGeometry(QRect(500, 700, 531, 71));
        systemDisplay_2->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    background-color: #A9A9A9;\n"
"    color: black;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    background-color: #A9A9A9;\n"
"    subcontrol-origin: margin; /* This property is used to align the title within the margin area */\n"
"    subcontrol-position: top center; /* This aligns the title to the top center */\n"
"    padding: 0px 0px; /* Adjust the padding as needed */\n"
"}\n"
""));
        systemDisplay_2->setAlignment(Qt::AlignCenter);
        systemDisplay_2->setFlat(false);
        normalButton = new QPushButton(systemDisplay_2);
        normalButton->setObjectName("normalButton");
        normalButton->setGeometry(QRect(10, 30, 81, 31));
        normalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"  border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"  border: 4px solid yellow;\n"
"}\n"
""));
        nonShockableButton = new QPushButton(systemDisplay_2);
        nonShockableButton->setObjectName("nonShockableButton");
        nonShockableButton->setGeometry(QRect(100, 30, 141, 31));
        nonShockableButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"  border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"  border: 4px solid yellow;\n"
"}\n"
""));
        weekCompressionButton = new QPushButton(systemDisplay_2);
        weekCompressionButton->setObjectName("weekCompressionButton");
        weekCompressionButton->setGeometry(QRect(340, 30, 181, 31));
        weekCompressionButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"  border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"  border: 4px solid yellow;\n"
"}\n"
""));
        batteryButton = new QPushButton(systemDisplay_2);
        batteryButton->setObjectName("batteryButton");
        batteryButton->setGeometry(QRect(250, 30, 81, 31));
        batteryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"  border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton[on=\"true\"] {\n"
"  border: 4px solid yellow;\n"
"}\n"
""));
        upButton_6 = new QPushButton(systemDisplay);
        upButton_6->setObjectName("upButton_6");
        upButton_6->setGeometry(QRect(60, 470, 211, 151));
        upButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: transparent;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/public/aed4.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_6->setIcon(icon4);
        upButton_6->setIconSize(QSize(200, 200));
        upButton_7 = new QPushButton(systemDisplay);
        upButton_7->setObjectName("upButton_7");
        upButton_7->setGeometry(QRect(20, 200, 211, 151));
        upButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: transparent;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/public/aed1.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_7->setIcon(icon5);
        upButton_7->setIconSize(QSize(200, 200));
        upButton_8 = new QPushButton(systemDisplay);
        upButton_8->setObjectName("upButton_8");
        upButton_8->setGeometry(QRect(390, 130, 211, 171));
        upButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: transparent;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/public/aed2.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_8->setIcon(icon6);
        upButton_8->setIconSize(QSize(200, 200));
        upButton_9 = new QPushButton(systemDisplay);
        upButton_9->setObjectName("upButton_9");
        upButton_9->setGeometry(QRect(740, 470, 211, 171));
        upButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: transparent;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/public/aed3.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_9->setIcon(icon7);
        upButton_9->setIconSize(QSize(200, 200));
        step1Light = new QPushButton(systemDisplay);
        step1Light->setObjectName("step1Light");
        step1Light->setGeometry(QRect(190, 320, 31, 31));
        step1Light->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        step1Light->setIconSize(QSize(42, 42));
        step5Light = new QPushButton(systemDisplay);
        step5Light->setObjectName("step5Light");
        step5Light->setGeometry(QRect(190, 490, 31, 31));
        step5Light->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        step5Light->setIconSize(QSize(42, 42));
        step2Light = new QPushButton(systemDisplay);
        step2Light->setObjectName("step2Light");
        step2Light->setGeometry(QRect(410, 270, 31, 31));
        step2Light->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        step2Light->setIconSize(QSize(42, 42));
        step4Light = new QPushButton(systemDisplay);
        step4Light->setObjectName("step4Light");
        step4Light->setGeometry(QRect(730, 520, 31, 31));
        step4Light->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        step4Light->setIconSize(QSize(42, 42));
        consoleView = new QGroupBox(systemDisplay);
        consoleView->setObjectName("consoleView");
        consoleView->setGeometry(QRect(0, 700, 501, 71));
        consoleView->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    background-color: #A9A9A9;\n"
"    color: black;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    background-color: #A9A9A9;\n"
"    subcontrol-origin: margin; /* This property is used to align the title within the margin area */\n"
"    subcontrol-position: top center; /* This aligns the title to the top center */\n"
"    padding: 1px 1px; /* Adjust the padding as needed */\n"
"}\n"
""));
        consoleView->setAlignment(Qt::AlignCenter);
        consoleView->setFlat(true);
        consoleText = new QPlainTextEdit(consoleView);
        consoleText->setObjectName("consoleText");
        consoleText->setGeometry(QRect(0, 20, 501, 51));
        consoleText->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(0, 0, 0);    \n"
"    font-family: \"Consolas\", \"Courier New\", monospace; \n"
"    border: 1px solid #555;  \n"
"    padding: 5px;            \n"
"}\n"
""));
        consoleText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        upButton_10 = new QPushButton(systemDisplay);
        upButton_10->setObjectName("upButton_10");
        upButton_10->setGeometry(QRect(730, 230, 211, 171));
        upButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: transparent;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/public/aed5.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_10->setIcon(icon8);
        upButton_10->setIconSize(QSize(200, 200));
        step3Light = new QPushButton(systemDisplay);
        step3Light->setObjectName("step3Light");
        step3Light->setGeometry(QRect(730, 360, 31, 31));
        step3Light->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    border: 1px solid #000;\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton[status=\"yellow\"] {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton[status=\"red\"] {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton[status=\"white\"] {\n"
"    background-color: white;\n"
"}\n"
""));
        step3Light->setIconSize(QSize(42, 42));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1029, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        systemDisplay->setTitle(QString());
        statusLight4->setText(QString());
        shockButton->setText(QString());
        statusDisplay->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:64pt; font-weight:700; color:#ff2600;\">OFF</span></p></body></html>", nullptr));
        onButton->setText(QString());
        statusLight3->setText(QString());
        statusLight1->setText(QString());
        statusLight2->setText(QString());
        checkMark->setText(QString());
        xMark->setText(QString());
        elevatorNumber_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; color:#009cfa;\">AED</span></p></body></html>", nullptr));
        heartBeatDisplay->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        systemDisplay_2->setTitle(QCoreApplication::translate("MainWindow", "TEST CASES", nullptr));
        normalButton->setText(QCoreApplication::translate("MainWindow", "NORMAL", nullptr));
        nonShockableButton->setText(QCoreApplication::translate("MainWindow", "NON SHOCKABLE", nullptr));
        weekCompressionButton->setText(QCoreApplication::translate("MainWindow", "WEAK COMPRESSIONS", nullptr));
        batteryButton->setText(QCoreApplication::translate("MainWindow", "BATTERY", nullptr));
        upButton_6->setText(QString());
        upButton_7->setText(QString());
        upButton_8->setText(QString());
        upButton_9->setText(QString());
        step1Light->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        step5Light->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        step2Light->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        step4Light->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        consoleView->setTitle(QCoreApplication::translate("MainWindow", "SYSTEM VOICE", nullptr));
        upButton_10->setText(QString());
        step3Light->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
