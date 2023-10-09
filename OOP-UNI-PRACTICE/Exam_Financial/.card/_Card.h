#pragma once

#define LAPTOP 1

#ifdef LAPTOP
#include "C:\Uni-Prog-Lap\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#else
#include "D:\UniProg\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#endif

typedef unsigned short u_short;
struct ExpDate
{
    u_short _day;
    u_short _month;
    u_short _year;
};


class Card {

    protected:

        std::string _name;
        double _amount;
        const ExpDate _expDate;

};