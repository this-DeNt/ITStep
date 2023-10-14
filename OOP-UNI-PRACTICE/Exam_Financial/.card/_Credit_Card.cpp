#include "_Credit_Card.h"

Credit::Credit(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount, double _InputCredLim, double _InputCredScore, double _InputCredAmount):Card(_InputNum,_InputCVV,_InputExp,_InputBank,_InputManu, _InputAmount)
{
    _credAmount = _InputCredAmount;
    _credScore = _InputCredScore;
    _credLim = _InputCredLim;
}

void Credit::print(void) const
{
    std::cout << "============" << std::endl << "Number: " << _NUMBER << std::endl << "Exp. Date: " << _EXP_DATE << "\t" << "CVV: " << _CVV << std::endl
        << "Personal Amount: " << _amount << std::endl << "Cred. amount: " << _credAmount << "============" << std::endl;
}

double Credit::getCredLim()
{
    return _credLim;
}

double Credit::getCredScore()
{
    return _credScore;
}

double Credit::getCredAmount()
{
    return _credAmount;
}
