#include "_Debit_Card.h"

Debit::Debit(long long _InputNum, u_short _InputCVV, ExpDate _InputExp, std::string _InputBank, std::string _InputManu, double _InputAmount, std::string _orgI, double _incomeI):Card(_InputNum,_InputCVV,_InputExp,_InputBank,_InputManu, _InputAmount)
{
    _org = _orgI;
    _income = _incomeI;
}

void Debit::print() const
{
    std::cout << "============" << std::endl << "Number: " << _NUMBER << std::endl << "Exp. Date: " << _EXP_DATE << "\t" << "CVV: " << _CVV << std::endl
        << "Personal Amount: " << _amount << std::endl << "Organisation: " << _org << "\t" << "Income: " << _income << std::endl <<
        _BANK << "\t" << _CARD_MANU << std::endl;
}

std::string Debit::getOrg()
{
    return _org;
}

double Debit::getIncome()
{
    return _income;
}
