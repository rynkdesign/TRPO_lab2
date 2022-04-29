#include "subject.h"
#include <algorithm>

void ASubject::Attach(ObFile *product)
{
    list.push_back(product);
}

void ASubject::Detach(ObFile *product)
{
    list.erase(std::remove(list.begin(), list.end(), product), list.end());
}

void ASubject::Notify(bool fileExist, int size)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] != nullptr)
        {
            list[i]->Update(fileExist, size);
        }
    }
}

void ConcreteProduct::updateObservers()
{
    Notify(File.exists(),File.size());
}
