#include <QCoreApplication>
#include "subject.h"
#include <chrono>
#include <thread>
#include <iostream>

int main()
{

    QString fileName = "test.txt"; // Создаём файл
    ConcreteProduct test(fileName); // Создаём объект ConcreteProduct

    ObFile Ob1("Первый наблюдатель" + fileName), Ob2("Второй наблюдатель" +fileName); // Создаём 2 наблюдателя

    test.Attach(&Ob1); // Добавляем 1ого наблюдателя
    test.Attach(&Ob2); // Добавляе 2ого

    test.updateObservers(); // Обновляем данные в наболюдателях

    test.Detach(&Ob2); // Отвязываем 2ого

    test.updateObservers(); // Обновляем данные в наболюдателе

    while(true) // Отслеживаем состояние файла
    {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            test.updateObservers();
    }

    return 0;
}
