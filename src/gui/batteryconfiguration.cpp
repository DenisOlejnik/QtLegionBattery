#include "batteryconfiguration.h"
#include "ui_batteryconfiguration.h"

BatteryConfiguration::BatteryConfiguration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BatteryConfiguration)
{
    ui->setupUi(this);
    ui->sliderChargeMode->setRange(0, 2);
    ui->sliderChargeMode->setSingleStep(1); // <- arrows keys ->
    ui->sliderChargeMode->setPageStep(1); // PageUp PageDown keys
    ui->sliderChargeMode->setTickPosition(QSlider::TicksBelow);
}

BatteryConfiguration::~BatteryConfiguration()
{
    delete ui;
}
