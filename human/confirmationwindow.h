#ifndef CONFIRMATIONWINDOW_H
#define CONFIRMATIONWINDOW_H

#include <QMainWindow>
#include "human.h"
#include "singletonhuman.h"

namespace Ui {
  class ConfirmationWindow;
}

class ConfirmationWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit ConfirmationWindow(QWidget *parent = nullptr, Human const & human = Human("", "", 0, 0, 0, "", "", ""));
  ~ConfirmationWindow();

private slots:

  void on_cancelPushButton_clicked();

  void on_savePushButton_clicked();

private:
  Ui::ConfirmationWindow *ui;
  Human human;
};

#endif // CONFIRMATIONWINDOW_H
