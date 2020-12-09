#ifndef FILE_H
#define FILE_H

#include <QObject>
#include <QMessageBox>
#include <fstream>
#include "singletonhuman.h"

class File
{
public:
  File();

private:
  std::ifstream inFile;
  std::ofstream outFile;
};

#endif // FILE_H

