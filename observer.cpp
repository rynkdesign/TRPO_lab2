#include "observer.h"

ObFile::ObFile(std::string _name)
{
    name=_name; // Имя файла
    fileExist = false; // Существует ли файл
    size = 0;  // Размер файла
}

void ObFile::Update(bool _fileExist, int _size)
{
    if(_fileExist)
    {
        if (size == _size)
        {
            if(_size!=0)
            {
                std::cout<< "File: " << name << "exists and is not empty"<<std::endl;
                std::cout<< "Size: " << _size<<std::endl;
            }
        }
        else
        {
            std::cout<< "File: " << name << "exists and has been modified"<<std::endl;
            std::cout<< "New size: " << _size<<std::endl;
        }
    }
    else
    {
        std::cout<< "File:" << name << "does not exist"<<std::endl;
    }

    size=_size;
    fileExist=_fileExist;
}
