#include "framework.h"
#include "_Prio_Queue.h"

Queue_Prior::Queue_Prior(int m)
{
    MaxQueueLength = m;
    Wait = new int[MaxQueueLength];
    Pri = new int[MaxQueueLength];
    QueueLength = 0;
}

Queue_Prior::~Queue_Prior()
{
    delete[] Wait;
    delete[] Pri;
}

void Queue_Prior::Clear() { QueueLength = 0; }

bool Queue_Prior::IsEmpty() { return QueueLength == 0; }

bool Queue_Prior::IsFull() { return QueueLength == MaxQueueLength; }

int Queue_Prior::GetCount() { return QueueLength; }

void Queue_Prior::Add(int c, int p)
{
    if (!IsFull())
    {
        Wait[QueueLength] = c;
        Pri[QueueLength] = p;
        QueueLength++;
    }
}

int Queue_Prior::Extract()
{
    if (!IsEmpty())
    {
        int max_pri = Pri[0];
        int pos_max_pri = 0;

        for (int i = 1; i < QueueLength; i++)
        {
            if (max_pri < Pri[i])
            {
                max_pri = Pri[i];
                pos_max_pri = i;
            }
        }

        int temp1 = Wait[pos_max_pri];
        int temp2 = Pri[pos_max_pri];

        for (int i = pos_max_pri; i < QueueLength - 1; i++)
        {
            Wait[i] = Wait[i + 1];
            Pri[i] = Pri[i + 1];
        }

        QueueLength--;
        return temp1;
    }
    else{ return -1; }
}

void Queue_Prior::Show()
{
    std::cout << "\n-------------------------------------\n";
    for (int i = 0; i < QueueLength; i++)
    {
        std::cout << Wait[i] << " - " << Pri[i] << "\n\n";
    }
    std::cout << "\n-------------------------------------\n";
}