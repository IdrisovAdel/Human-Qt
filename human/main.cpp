#include <QtWidgets>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow window1;
  FillHuman window2;
  window1.show();
  //window2.show();
  return a.exec();
}
