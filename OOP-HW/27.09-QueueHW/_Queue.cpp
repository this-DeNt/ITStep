#include "framework.h"
#include "_Queue.h"

Statistics::Statistics(int m)
{
    MaxQueueLength = m;
    Users = new int[MaxQueueLength];
    QueueLength = 0;
}

Statistics::~Statistics() 
{ 
    delete[] Users; 
}

void Statistics::Add(int user)
{
    if (QueueLength < MaxQueueLength)
    {
        Users[QueueLength] = user;
        QueueLength++;
    }
}

void Statistics::Show()
{
    std::cout << "\n-------------------------------------\n";
    for (int i = 0; i < QueueLength; i++)
    {
        std::cout << "User: " << Users[i] << "\n\n";
    }
    std::cout << "\n-------------------------------------\n";
}