#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <vector>
#include "observer.h"
#include <QFile>

class ASubject
{
    std::vector<ObFile*> list; // Список всех файлов (наблюдателей)
public:
    void Attach(ObFile *product);
    void Detach(ObFile *product);
    void Notify(bool fileExist, int size);
};

#endif // SUBJECT_H

class ConcreteProduct : public ASubject
{
    QFile File;

public:
    ConcreteProduct(const QString& fileName): File(fileName) {};
    void updateObservers();
};
