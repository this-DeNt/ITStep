#pragma once

#include "../.framework/examframework.h"
#include "_Card.h"

class Debit: public Card {

    private:

        std::string _org;
        double _income;

    public:

        Debit(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount, std::string _orgI, double _incomeI);

        void print() const;

        std::string getOrg();
        double getIncome();

};