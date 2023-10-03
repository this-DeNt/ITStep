#pragma once
#include "framework.h"

class Queue_Prior {

private:

    int* Wait;
    int* Pri;
    int MaxQueueLength;
    int QueueLength;

public:

    Queue_Prior(int m);
    ~Queue_Prior();
    void Add(int c, int p);
    int Extract();
    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void Show();
};