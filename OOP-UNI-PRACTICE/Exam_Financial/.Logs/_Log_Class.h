#pragma once

#ifdef LAPTOP
#include "C:\Uni-Prog-Lap\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#else
#include "D:\Uni-Prog-Pc\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#endif

#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.card/_Card.h>

class Log {

    const double _SPENT_AMOUNT;
    long long _cardNum;
    ExpDate _spendingDate;
    std::string _category;

    public:

        Log(double _InputAm, long long _InputCard, ExpDate _InputDate, std::string _cInput);

        void print();
        double getAmount();
        ExpDate getDate();
};

class Logs {

    std::vector<Log*> _logs;
    void sortLogs();

    public:

        Logs() = default;

        void printLogs();
        void pushLog(Log* _InputLog);
        void getDayRate(u_short _InputDay);
        void getMonthRate(u_short _InputMonth);
};