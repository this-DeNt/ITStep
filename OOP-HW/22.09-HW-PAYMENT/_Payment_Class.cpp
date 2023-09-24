#include "_Payment_Class.h"
#include "framework.h"

const double PAYMENT::_IncomeTax = 13;
const double PAYMENT::_PensionTax = 1;

double PAYMENT::returnRealIncomeDays(void) const
{
    return (this->_Income / this->_WorkDaysMin) * this->_Workdays;
}

double PAYMENT::returnSurplusIncome(void) const
{
    return returnRealIncomeDays() + this->_Surplus;
}

PAYMENT::PAYMENT(const char *_InputSur, const char *_InputName, const char *_InputPatro, const double _InputYearSal, const unsigned short _InputEmploYear,
                 const unsigned short _InputWorkDays, const unsigned short _InputWorkDaysMin, const double _IncomeInput,
                 const double _HoldInput) : _Surname(_InputSur), _Name(_InputName), _Patronym(_InputPatro), _WorkDaysMin(_InputWorkDaysMin)
{
    this->_YearSal = _InputYearSal;
    this->_EmploYear = _InputEmploYear;
    this->_Surplus = this->returnSurplusIncome();
}

unsigned int PAYMENT::returnExp(const unsigned int _InputCurrentYear) const
{
    return _InputCurrentYear - this->_EmploYear;
}

double PAYMENT::returnIncome(void) const
{
    return this->_Income;
}

double PAYMENT::returnRealIncome(void) const
{
    return 0.0;
}

double PAYMENT::returnTaxedIncome(void) const
{
    const double taxedIncomeGeneral = (returnSurplusIncome() - (returnSurplusIncome() * this->_IncomeTax / 100));

    return (taxedIncomeGeneral - (taxedIncomeGeneral * this->_PensionTax / 100));
}

void PAYMENT::operator+(const double _Input)
{
    this->_Income += _Input;
}

void PAYMENT::operator-(const double _Input)
{
    this->_Income -= _Input;
}

void PAYMENT::operator*(const double _Input)
{
    this->_Income *= _Input;
}

void PAYMENT::operator/(const double _Input)
{
    this->_Income /= _Input;
}

void PAYMENT::operator=(const double _Input)
{
    this->_Income = _Input;
}

PAYMENT::~PAYMENT()
{
    delete[] this->_Surname;
    delete[] this->_Name;
    delete[] this->_Patronym;
}

double PAYMENT::returnHold(void) const
{
    return (((this->_Income / this->_WorkDaysMin) * (this->_WorkDaysMin - this->_Workdays)) + (returnSurplusIncome() * this->_IncomeTax / 100) + (returnSurplusIncome() * this->_PensionTax / 100));
}