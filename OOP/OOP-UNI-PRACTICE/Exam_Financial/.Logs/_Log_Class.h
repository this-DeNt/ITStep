#pragma once

#include "../.framework/examframework.h"
#include "../.card/_Card.h"

struct Categories {

    std::map<int, std::string> _catTree = {{1, "Cafes"}, {2, "Travel"}, {3, "Entertainment"}};

    std::string getCat(int key) {

        if (key > _catTree.size() || key <= 0) {

            std::cout << "Invalid Key" << std::endl;
            return "-1";
        }

        for (auto i = _catTree.begin(); i != _catTree.end(); i++) {

            if (i->first == key) {

                return i->second;
            }
        }
    }
};

class Log {

    const double _SPENT_AMOUNT;
    long long _cardNum;
    ExpDate _spendingDate;
    std::string _category;

    public:

        Log(const double _InputAm, long long _InputCard, ExpDate _InputDate, std::string _cInput);

        void print();
        long long getNum();
        double getAmount();
        ExpDate getDate();
        std::string getCat();
};

class Logs {

    std::vector<Log*> _logs;
    void sortLogs();

    public:


        Logs() = default;
        Logs(const Logs& _InputLogs);

        Log* getLog(size_t idx);
        size_t getLogsSize();

        void printLogs();
        void pushLog(Log* _InputLog);
        void getDayRate(u_short _InputDay);
        void getMonthRate(u_short _InputMonth);

        void getDayCatRate(u_short _InputDay, std::string _cInput);
        void getMonthCatRate(u_short _InputMonth, std::string _cInput);
};