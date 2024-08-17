#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("营养价值"), tr("土豆具有很高的营养价值和药用价值，其营养素丰富，含有蛋白质、矿物质(磷、钙等)、维生素等多种成分，营养结构也较合理，有“地下苹果”之称。"));
}

