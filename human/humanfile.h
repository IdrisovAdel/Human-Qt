#ifndef HUMANFILE_H
#define HUMANFILE_H

#include <fstream>
#include <QDebug>

class humanFile
{
public:
  humanFile(std::string const & name = "humanFile.txt");

  void inFileWrite(std::string const & text);

  std::string fromFileRead();

private:
  std::fstream file;
  std::string const fileName;
};

#endif // HUMANFILE_H
