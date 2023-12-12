#include "TestCases.h"

// Constructor
TestCases::TestCases(QObject *parent)
    : QObject(parent), currentTest(AedStates::SUCCESS) { } // Initialize the current test to SUCCESS

//Getter
AedStates TestCases::getCurrentTest(){
    return currentTest;
}

//Setter
void TestCases::setCurrentTest(AedStates test) {
    if (currentTest != test) {
        currentTest = test;
    }
}
