#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>

// Класс интерфейс файла для наблюдателя
class IObserver
{
public:
    virtual void Update(bool fileExist, int size) = 0; // Виртуальная функция обновления файла
};

// Класс создания файла для наблюдателя
class ObFile :public IObserver
{
    std::string name; // Имя файла
    bool fileExist; // Существует ли файл
    int size;  // Размер файла

public:
    ObFile(std:: string name); // Конструктор для файла
    void Update(bool fileExist, int size); // Обновление файла
};

#endif // OBSERVER_H
