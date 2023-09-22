#pragma once
#include "framework.h"

class PAYMENT {

private:

    std::string _Surname;
    std::string _Name;
    std::string _Patronym;

    unsigned int _YearSal;
    unsigned int _Tax;
    unsigned short _EmploYear;
    unsigned short _Surplus;
    unsigned short _Workdays;
    const unsigned short _WorkDaysMin;
    unsigned int _Income;
    unsigned int _Hold;

public:

    PAYMENT() = default;
    PAYMENT(const std::string& _InputSur, const std::string& _InputName, const std::string& _InputPatro, const unsigned int _InputYearSal, const unsigned int _InputTax, const unsigned short _InputEmploYear,
    const unsigned short _InputSurplus, const unsigned short _InputWorkDays, const unsigned short _InputWorkDaysMin);

};