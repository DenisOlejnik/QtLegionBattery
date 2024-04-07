#ifndef BATTERYSTATUS_H
#define BATTERYSTATUS_H

#include <QWidget>

namespace Ui {
class BatteryStatus;
}

class BatteryStatus : public QWidget
{
    Q_OBJECT

public:
    explicit BatteryStatus(QWidget *parent = nullptr);
    ~BatteryStatus();

private:
    Ui::BatteryStatus *ui;
};

#endif // BATTERYSTATUS_H
