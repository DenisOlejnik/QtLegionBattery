#ifndef BATTERYCONFIGURATION_H
#define BATTERYCONFIGURATION_H

#include <QWidget>

namespace Ui {
class BatteryConfiguration;
}

class BatteryConfiguration : public QWidget
{
    Q_OBJECT

public:
    explicit BatteryConfiguration(QWidget *parent = nullptr);
    ~BatteryConfiguration();

private:
    Ui::BatteryConfiguration *ui;
};

#endif // BATTERYCONFIGURATION_H
