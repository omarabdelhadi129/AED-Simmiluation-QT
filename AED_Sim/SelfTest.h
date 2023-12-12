#ifndef SELFTEST_H
#define SELFTEST_H

#include <QObject>
#include <QTimer>
#include "AedStates.h"
#include "TestCases.h"

class SelfTest : public QObject {
    Q_OBJECT

public:
    explicit SelfTest(QObject *parent = nullptr);
    TestCases* getTestCase() {return testCase;}

signals:
    void testStarted();
    void testCompleted(AedStates result);

public slots:
    void startTest();
    void completeTest();

private:
    QTimer *testTimer;
    TestCases* testCase;
};

#endif // SELFTEST_H


