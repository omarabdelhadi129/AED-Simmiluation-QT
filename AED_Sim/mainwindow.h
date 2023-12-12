#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QStyle>
#include <QRegularExpression>
#include "SelfTest.h"
#include "AedStates.h"
#include "ShockButton.h"
#include "AedInstruction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum LightColor { White, Yellow, Red };
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateStatusDisplay(const QString& message, const QString& colorHex);
    void updateHeartbeatDisplay(const QString& rhythm);
    void updateCheckMark(bool status);
    void resetDisplays();
    void setTestButtonClicked(int buttonIndex);
    void performSelfTest();
    void onSelfTestCompleted(AedStates result);
    void logVoiceMessage(const QString& message);
    void onShockDelivered();
    void highlightStep(int step);

private slots:
    void handleOnButtonPressed();
    void handleOnButtonReleased();

private:
    Ui::MainWindow *ui;
    SelfTest *selfTest;
    QTimer *flashingTimer;
    QList<QPushButton*> statusLights;
    LightColor currentLightColor = White;
    bool isOn;
    bool selfTestInProgress;
    AedStates state;
    AedInstruction *aedInstruction;
    ShockButton *shockButton;
    void toggleStatusLights(LightColor color, const QList<QPushButton*>& lights);
};

#endif // MAINWINDOW_H
