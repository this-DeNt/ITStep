#pragma once
#include "framework.h"

class Statistics {

private:

    int* Users;
    int MaxQueueLength;
    int QueueLength;

public:

    Statistics(int m);
    ~Statistics();
    void Add(int user);
    void Show();
};