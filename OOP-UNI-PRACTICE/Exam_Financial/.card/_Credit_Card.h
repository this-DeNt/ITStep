#pragma once

#include "_Card.h"

//#define LAPTOP 1

#ifdef LAPTOP
#include "C:\Uni-Prog-Lap\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#else
#include "D:\Uni-Prog-Pc\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#endif

class Credit: public Card {

    private:

        double _credLim;
        double _credScore;
        double _credAmount;

    public:

        Credit(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount, double _InputCredLim, double _InputCredScore, double _InputCredAmount);
        void print(void) const;

        double getCredLim();
        double getCredScore();
        double getCredAmount();
};