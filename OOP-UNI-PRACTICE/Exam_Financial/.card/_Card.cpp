#include "_Card.h"

//#define LAPTOP 1

#ifdef LAPTOP
#include "C:\Uni-Prog-Lap\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#else
#include "D:\Uni-Prog-Pc\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#endif

Card::Card():_NUMBER(1111111111111111), _CVV(111), _EXP_DATE({11, 11, 1111}), _BANK("Lorem Impsum"), _CARD_MANU("Lorem Impsum")
{
    _amount = 0.0;
}

Card::Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp):_NUMBER(_InputNum), _CVV(_InputCVV), _EXP_DATE(_InputExp), _BANK("Lorem Impsum"), _CARD_MANU("Lorem Impsum")
{
    _amount = 0.0;
}

Card::Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu): _NUMBER(_InputNum), _CVV(_InputCVV), _EXP_DATE(_InputExp), _BANK(_InputBank), _CARD_MANU(_InputManu)
{
    _amount = 0.0;
}

Card::Card(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount):Card(_InputNum,_InputCVV,_InputExp,_InputBank,_InputManu)
{
    _amount = _InputAmount;
}

long long Card::getNumber(void) const
{
    return _NUMBER;
}

u_short Card::getCVV(void) const
{
    return _CVV;
}

ExpDate Card::getEXP(void) const
{
    return _EXP_DATE;
}

double Card::getAmount(void) const
{
    return _amount;
}

std::string Card::getBank(void) const
{
    return _BANK;
}

std::string Card::getManu(void) const
{
    return _CARD_MANU;
}

void Card::setAmount(double _InputAmount)
{
    _amount = _InputAmount;
}


