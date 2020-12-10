#include "humanfile.h"

humanFile::humanFile(std::string const & name) : fileName(name)
{
}

void humanFile::inFileWrite(const std::string &text)
{
  file.open(fileName, std::ios::out | std::ios::app);
  if(!file.is_open())
    {
      qDebug() << "Can't open" << QString::fromStdString(fileName);
    }
  else
    qDebug() << "File" << QString::fromStdString(fileName) << "is open!";
  file << text << '\n';
  file.close();
}

std::string humanFile::fromFileRead()
{
  file.open(fileName, std::ios::in);
  if(!file.is_open())
    {
      qDebug() << "Can't open" << QString::fromStdString(fileName);
    }
  else
    qDebug() << "File" << QString::fromStdString(fileName) << "is open!";

  std::string text = "";
  std::string line, newLineSymbol;
  while(std::getline(file, line))
    {
      text += line + '\n';
    }
  file.close();
  return text;
}
