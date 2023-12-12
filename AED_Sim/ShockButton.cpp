#include "ShockButton.h"

ShockButton::ShockButton(QObject *parent) : QObject(parent) {}

void ShockButton::handleShockButtonPressed() {
    emit shockDelivered();
}
