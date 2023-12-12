#ifndef TESTCASES_H
#define TESTCASES_H

#include <QObject>
#include "AedStates.h"

class TestCases : public QObject {
    Q_OBJECT

public:
    explicit TestCases(QObject *parent = nullptr);
    AedStates getCurrentTest();
    void setCurrentTest(AedStates test);

private:
    AedStates currentTest;
};

#endif // TESTCASES_H
