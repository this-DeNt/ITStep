#pragma once
#include "framework.h"

class PAYMENT {

private:

    static const double _IncomeTax;
    static const double _PensionTax;

    const char* _Surname;
    const char* _Name;
    const char* _Patronym;

    const unsigned short _WorkDaysMin;
    unsigned short _EmploYear;
    unsigned short _Workdays;
    double _Surplus;
    double _YearSal;
    double _Income;
    double _Hold;

    double returnRealIncomeDays(void) const;
    double returnSurplusIncome(void) const;


public:

    PAYMENT() = default;
    PAYMENT(const char* _InputSur, const char* _InputName, const char* _InputPatro, const double _InputYearSal, const unsigned short _InputEmploYear,
            const unsigned short _InputWorkDays, const unsigned short _InputWorkDaysMin, const double _IncomeInput, const double _HoldInput);

    unsigned int returnExp(const unsigned int _InputCurrentYear) const;
    double returnIncome(void) const;
    double returnHold(void) const;
    double returnRealIncome(void) const;
    double returnTaxedIncome(void) const;

    void operator+(const double _Input);
    void operator-(const double _Input);
    void operator*(const double _Input);
    void operator/(const double _Input);
    void operator=(const double _Input);

    ~PAYMENT();
};