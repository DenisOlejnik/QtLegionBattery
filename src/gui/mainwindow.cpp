#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_batteryStatus = new BatteryStatus(this);
    m_batteryConfig = new BatteryConfiguration(this);

    ui->vLayoutContent->layout()->addWidget(m_batteryStatus);
    ui->vLayoutContent->layout()->addWidget(m_batteryConfig);
}

MainWindow::~MainWindow()
{
    delete ui;
}

