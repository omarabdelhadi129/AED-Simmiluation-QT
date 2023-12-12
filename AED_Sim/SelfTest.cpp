#include "SelfTest.h"

SelfTest::SelfTest(QObject *parent) : QObject(parent), testTimer(new QTimer(this)), testCase(new TestCases(this)) {
    testTimer->setInterval(7000); // Set the self-test duration **make 3 seconds for demo
    connect(testTimer, &QTimer::timeout, this, &SelfTest::completeTest);
}

void SelfTest::startTest() {
    testTimer->start();
    emit testStarted();
}

void SelfTest::completeTest() {
    testTimer->stop();
    emit testCompleted(static_cast<AedStates>(testCase->getCurrentTest())); // Cast to AedStates if necessary
}
