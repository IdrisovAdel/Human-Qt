#include "file.h"

File::File()
{
    inFile.open("humanFile.txt");
    if(!inFile.is_open())
        {
            QMessageBox::critical(this, "Ошибка", "Файл для чтения не открылся!", QMessageBox::Cancel);
            return;
        }
    outFile.open("humanFile.txt");
    if(!outFile.is_open())
        {
            QMessageBox::critical(this, "Ошибка", "Файл для записи не открылся!", QMessageBox::Cancel);
            return;
        }
}
