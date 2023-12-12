#ifndef AEDINSTRUCTION_H
#define AEDINSTRUCTION_H

#include <QObject>
#include <QTimer>
#include "AedStates.h"

class AedInstruction : public QObject {
    Q_OBJECT

public:
    explicit AedInstruction(QObject *parent = nullptr);
    void setState(AedStates aState);

signals:
    void updateStepDisplay(const QString& message);
    void highlightStep(int step);
    void attemptRescue();
    void makeStatusLightsRed();
    void detectHeartBeat();

public slots:
    void startInstructionCycle();
    void proceedToNextStep();

private:
    int currentStep;
    QTimer *instructionTimer;
    AedStates state;
    const int stepDuration = 2000; // 4 seconds for each step change 1 in demo to speed up***
    const int totalSteps = 5;
    int cycles;
};

#endif // AEDINSTRUCTION_H
