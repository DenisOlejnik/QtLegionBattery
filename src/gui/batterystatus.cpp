#include "batterystatus.h"
#include "ui_batterystatus.h"

BatteryStatus::BatteryStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BatteryStatus)
{
    ui->setupUi(this);
}

BatteryStatus::~BatteryStatus()
{
    delete ui;
}
