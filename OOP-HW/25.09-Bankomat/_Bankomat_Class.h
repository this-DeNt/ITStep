#pragma once
#include "framework.h"

class BANKOMAT {

private:

    std::string _identification;
    unsigned int _currentBSum;
    const unsigned int _minSum;
    const unsigned int _maxSum;

    unsigned short _tenBillCount;
    unsigned short _twentBillCount;
    unsigned short _fiftBillCount;
    unsigned short _hundBillCount;
    unsigned short _thundBillCount;
    unsigned short _fhundBillCount;
    unsigned short _thsdBillCount;

    bool isValidSum(const unsigned int _UserInput) const;
    unsigned int countCurrentSum() const;

public:

    BANKOMAT() = default;
    BANKOMAT(const std::string _IdInput);
    BANKOMAT(const unsigned short _TenInput, const unsigned short _twentInput, const unsigned short _fiftInput, const unsigned short _hundInput, const unsigned short _thundInput,
             const unsigned short _fhundInput, const unsigned short _thsdInput, const unsigned short _MinInput, const unsigned int _MaxInput);
    
    unsigned int returnCurrentSum(void) const;

    void deposit(unsigned int _UserInput);

    void withdraw(unsigned int _UserInput);

    std::string getId() const;

    std::string returnSum() const;
};