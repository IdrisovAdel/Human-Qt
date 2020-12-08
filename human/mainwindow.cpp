#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_addButton_clicked()
{
  hide();
  filler = new FillHuman(this);
  filler->show();
}

void MainWindow::on_showData_clicked()
{
    hide();
    data = new dataWindow(this);
    data->show();
}
