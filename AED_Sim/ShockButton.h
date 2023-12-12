#ifndef SHOCKBUTTON_H
#define SHOCKBUTTON_H

#include <QObject>

class ShockButton : public QObject {
    Q_OBJECT

public:
    explicit ShockButton(QObject *parent = nullptr);

signals:
    void shockDelivered();

public slots:
    void handleShockButtonPressed();
};

#endif // SHOCKBUTTON_H
