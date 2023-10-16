#pragma once

#include "../.framework/examframework.h"

typedef unsigned short u_short;
struct ExpDate
{
    u_short _day;
    u_short _month;
    u_short _year;

    friend std::ostream& operator<<(std::ostream& os, const ExpDate& _InputDate) {

        os << _InputDate._day << "/" << _InputDate._month << "/" << _InputDate._year;

        return os;
    }

    bool operator==(ExpDate& _InputDate) {

        if (_day == _InputDate._day && _month == _InputDate._month && _year == _InputDate._year) {

            return true;
        }

        return false;
    }
};


class Card {

    protected:

        const long long _NUMBER;
        const u_short _CVV;
        const ExpDate _EXP_DATE;

        double _amount;

        const std::string _BANK;
        const std::string _CARD_MANU;

    public:

        Card();
        Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp);
        Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu);
        Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount);

        long long getNumber(void) const;
        u_short getCVV(void) const;
        ExpDate getEXP(void) const;
        double getAmount(void) const;
        std::string getBank(void) const;
        std::string getManu(void) const;

        void setAmount(double _InputAmount);

        virtual void print(void) const = 0;
};