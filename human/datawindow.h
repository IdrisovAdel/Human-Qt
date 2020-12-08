#ifndef DATAWINDOW_H
#define DATAWINDOW_H

#include <QMainWindow>
#include "singletonhuman.h"

namespace Ui {
  class dataWindow;
}

class dataWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit dataWindow(QWidget *parent = nullptr);
  ~dataWindow();

private slots:


  void on_backPushButton_clicked();

private:
  Ui::dataWindow *ui;
};

#endif // DATAWINDOW_H
