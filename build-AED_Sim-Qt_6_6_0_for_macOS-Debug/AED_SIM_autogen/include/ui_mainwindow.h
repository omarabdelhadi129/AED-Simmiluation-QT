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
    QPushButton *downButton_2;
    QPushButton *helpButton;
    QTextEdit *elevatorNumber;
    QPushButton *upButton_3;
    QPushButton *downButton_3;
    QPushButton *downButton_4;
    QPushButton *downButton_5;
    QPushButton *upButton_4;
    QPushButton *upButton_5;
    QTextEdit *elevatorNumber_2;
    QTextEdit *elevatorNumber_3;
    QGroupBox *systemDisplay_2;
    QPushButton *powerButton;
    QPushButton *powerButton_2;
    QPushButton *upButton_6;
    QPushButton *upButton_7;
    QPushButton *upButton_8;
    QPushButton *upButton_9;
    QPushButton *downButton_8;
    QPushButton *downButton_9;
    QPushButton *downButton_10;
    QPushButton *downButton_11;
    QGroupBox *consoleView;
    QPlainTextEdit *consoleText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1029, 709);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        systemDisplay = new QGroupBox(centralwidget);
        systemDisplay->setObjectName("systemDisplay");
        systemDisplay->setGeometry(QRect(0, -30, 1011, 641));
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
        downButton_2 = new QPushButton(systemDisplay);
        downButton_2->setObjectName("downButton_2");
        downButton_2->setGeometry(QRect(540, 350, 31, 31));
        downButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_2->setIconSize(QSize(42, 42));
        helpButton = new QPushButton(systemDisplay);
        helpButton->setObjectName("helpButton");
        helpButton->setGeometry(QRect(420, 390, 151, 121));
        helpButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 0, 0, 0.8);\n"
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
        helpButton->setIcon(icon);
        helpButton->setIconSize(QSize(100, 100));
        elevatorNumber = new QTextEdit(systemDisplay);
        elevatorNumber->setObjectName("elevatorNumber");
        elevatorNumber->setGeometry(QRect(310, 210, 371, 131));
        elevatorNumber->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;"));
        upButton_3 = new QPushButton(systemDisplay);
        upButton_3->setObjectName("upButton_3");
        upButton_3->setGeometry(QRect(920, 40, 71, 61));
        upButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/public/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_3->setIcon(icon1);
        upButton_3->setIconSize(QSize(42, 42));
        downButton_3 = new QPushButton(systemDisplay);
        downButton_3->setObjectName("downButton_3");
        downButton_3->setGeometry(QRect(500, 350, 31, 31));
        downButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_3->setIconSize(QSize(42, 42));
        downButton_4 = new QPushButton(systemDisplay);
        downButton_4->setObjectName("downButton_4");
        downButton_4->setGeometry(QRect(420, 350, 31, 31));
        downButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_4->setIconSize(QSize(42, 42));
        downButton_5 = new QPushButton(systemDisplay);
        downButton_5->setObjectName("downButton_5");
        downButton_5->setGeometry(QRect(460, 350, 31, 31));
        downButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_5->setIconSize(QSize(42, 42));
        upButton_4 = new QPushButton(systemDisplay);
        upButton_4->setObjectName("upButton_4");
        upButton_4->setGeometry(QRect(10, 40, 81, 61));
        upButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px; /* Adjust as necessary to make it circular */\n"
"        background-color: white;\n"
"        background-size: cover;\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/public/check.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_4->setIcon(icon2);
        upButton_4->setIconSize(QSize(60, 60));
        upButton_5 = new QPushButton(systemDisplay);
        upButton_5->setObjectName("upButton_5");
        upButton_5->setGeometry(QRect(100, 40, 81, 61));
        upButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;\n"
"        background-color: rgb(66, 67, 67);\n"
"\n"
"        background-size: cover;\n"
"	\n"
"        display: flex;\n"
"        justify-content: center;\n"
"        align-items: center;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/public/xmarkTran.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton_5->setIcon(icon3);
        upButton_5->setIconSize(QSize(60, 60));
        elevatorNumber_2 = new QTextEdit(systemDisplay);
        elevatorNumber_2->setObjectName("elevatorNumber_2");
        elevatorNumber_2->setGeometry(QRect(390, 10, 221, 101));
        elevatorNumber_2->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;\n"
"background-color: transparent;"));
        elevatorNumber_3 = new QTextEdit(systemDisplay);
        elevatorNumber_3->setObjectName("elevatorNumber_3");
        elevatorNumber_3->setGeometry(QRect(180, 100, 641, 81));
        elevatorNumber_3->setStyleSheet(QString::fromUtf8("display: flex;\n"
"text-align: center;\n"
"justify-content: center;\n"
"align-contnet: center;"));
        systemDisplay_2 = new QGroupBox(systemDisplay);
        systemDisplay_2->setObjectName("systemDisplay_2");
        systemDisplay_2->setGeometry(QRect(900, 530, 111, 111));
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
        powerButton = new QPushButton(systemDisplay_2);
        powerButton->setObjectName("powerButton");
        powerButton->setGeometry(QRect(10, 30, 91, 31));
        powerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"border-radius: 12px;"));
        powerButton_2 = new QPushButton(systemDisplay_2);
        powerButton_2->setObjectName("powerButton_2");
        powerButton_2->setGeometry(QRect(10, 70, 91, 31));
        powerButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"  border: none;\n"
"  color: black;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  border: 1px solid black;\n"
"  box-shadow: 0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19);\n"
"border-radius: 12px;"));
        upButton_6 = new QPushButton(systemDisplay);
        upButton_6->setObjectName("upButton_6");
        upButton_6->setGeometry(QRect(170, 380, 211, 151));
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
        upButton_8->setGeometry(QRect(760, 190, 211, 171));
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
        upButton_9->setGeometry(QRect(630, 390, 211, 171));
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
        downButton_8 = new QPushButton(systemDisplay);
        downButton_8->setObjectName("downButton_8");
        downButton_8->setGeometry(QRect(190, 320, 31, 31));
        downButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: yellow;\n"
"}\n"
""));
        downButton_8->setIconSize(QSize(42, 42));
        downButton_9 = new QPushButton(systemDisplay);
        downButton_9->setObjectName("downButton_9");
        downButton_9->setGeometry(QRect(250, 440, 31, 31));
        downButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_9->setIconSize(QSize(42, 42));
        downButton_10 = new QPushButton(systemDisplay);
        downButton_10->setObjectName("downButton_10");
        downButton_10->setGeometry(QRect(780, 330, 31, 31));
        downButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_10->setIconSize(QSize(42, 42));
        downButton_11 = new QPushButton(systemDisplay);
        downButton_11->setObjectName("downButton_11");
        downButton_11->setGeometry(QRect(770, 400, 31, 31));
        downButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* Adjust as necessary to make it circular */\n"
"    border: 1px solid #000; /* Optional: adds a border */\n"
"        background-color: white;\n"
"}\n"
""));
        downButton_11->setIconSize(QSize(42, 42));
        consoleView = new QGroupBox(systemDisplay);
        consoleView->setObjectName("consoleView");
        consoleView->setGeometry(QRect(0, 570, 291, 71));
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
        consoleText->setGeometry(QRect(0, 20, 291, 51));
        consoleText->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(0, 0, 0);    \n"
"    font-family: \"Consolas\", \"Courier New\", monospace; \n"
"    border: 1px solid #555;  \n"
"    padding: 5px;            \n"
"}\n"
""));
        consoleText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
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
        downButton_2->setText(QString());
        helpButton->setText(QString());
        elevatorNumber->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:64pt; font-weight:700; color:#e7f579;\">STATUS</span></p></body></html>", nullptr));
        upButton_3->setText(QString());
        downButton_3->setText(QString());
        downButton_4->setText(QString());
        downButton_5->setText(QString());
        upButton_4->setText(QString());
        upButton_5->setText(QString());
        elevatorNumber_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:72pt; font-weight:700; color:#009cfa;\">AED</span></p></body></html>", nullptr));
        elevatorNumber_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#008007;\">__/\\_/\\___/\\__/\\____/\\_/\\______/\\_____</span></p></body></html>", nullptr));
        systemDisplay_2->setTitle(QCoreApplication::translate("MainWindow", "TEST CASES", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "BATTERY", nullptr));
        powerButton_2->setText(QCoreApplication::translate("MainWindow", "DEATH", nullptr));
        upButton_6->setText(QString());
        upButton_7->setText(QString());
        upButton_8->setText(QString());
        upButton_9->setText(QString());
        downButton_8->setText(QString());
        downButton_9->setText(QString());
        downButton_10->setText(QString());
        downButton_11->setText(QString());
        consoleView->setTitle(QCoreApplication::translate("MainWindow", "SYSTEM VOICE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
