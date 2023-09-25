#include "_Bankomat_Class.h"

bool BANKOMAT::isValidSum(const unsigned int _UserInput) const
{
    if (_UserInput > this->_maxSum || _UserInput < _minSum) {

        return false;
    }

    return true;
}

unsigned int BANKOMAT::countCurrentSum() const
{
    return (this->_tenBillCount * 10) + (this->_twentBillCount * 20) + (this->_fiftBillCount * 50) + (this->_hundBillCount * 100) + (this->_thundBillCount * 200) + (this->_fhundBillCount * 500) + (this->_thsdBillCount * 1000);
}

BANKOMAT::BANKOMAT(std::string _IdInput) : _minSum(0), _maxSum(0)
{
    this->_identification = _IdInput;
}

BANKOMAT::BANKOMAT(const unsigned short _TenInput, const unsigned short _twentInput, const unsigned short _fiftInput, const unsigned short _hundInput, const unsigned short _thundInput, const unsigned short _fhundInput, const unsigned short _thsdInput, const unsigned short _MinInput, const unsigned int _MaxInput):_minSum(_MinInput), _maxSum(_MaxInput)
{
    this->_tenBillCount = _TenInput;
    this->_twentBillCount = _twentInput;
    this->_fiftBillCount = _fiftInput;
    this->_hundBillCount = _hundInput;
    this->_thundBillCount = _thundInput;
    this->_fhundBillCount = _fhundInput;
    this->_thsdBillCount = _thsdInput;

    this->_currentBSum = this->countCurrentSum();
}

unsigned int BANKOMAT::returnCurrentSum(void) const
{
    return this->countCurrentSum();
}

void BANKOMAT::deposit(unsigned int _UserInput)
{
    if (!this->isValidSum(_UserInput)) { return; }

    this->_currentBSum += _UserInput;

    while (this->_currentBSum % 10 != 0)
    {
        --this->_currentBSum;
    }

    while (_UserInput % 10 != 0) {

        --_UserInput;
    }

    while (_UserInput % 1000) {

        _UserInput -= 1000;
        ++this->_thsdBillCount;
    }

    while (_UserInput % 500)
    {
        _UserInput -= 500;
        ++this->_fhundBillCount;
    }

    while (_UserInput % 200)
    {
        _UserInput -= 200;
        ++this->_thundBillCount;
    }

    while (_UserInput % 100)
    {
        _UserInput -= 100;
        ++this->_hundBillCount;
    }

    while (_UserInput % 50)
    {
        _UserInput -= 50;
        ++this->_fiftBillCount;
    }

    while (_UserInput % 20)
    {
        _UserInput -= 20;
        ++this->_twentBillCount;
    }

    while (_UserInput % 10)
    {
        _UserInput -= 10;
        ++this->_tenBillCount;
    }
    
}

void BANKOMAT::withdraw(unsigned int _UserInput)
{
    if (!this->isValidSum(_UserInput)) { return; }

    this->_currentBSum -= _UserInput;

    while (this->_currentBSum % 10 != 0)
    {
        ++this->_currentBSum;
    }

    while (_UserInput % 10 != 0) {

        ++_UserInput;
    }

    while (_UserInput % 1000) {

        _UserInput -= 1000;
        --this->_thsdBillCount;
    }

    while (_UserInput % 500)
    {
        _UserInput -= 500;
        --this->_fhundBillCount;
    }

    while (_UserInput % 200)
    {
        _UserInput -= 200;
        --this->_thundBillCount;
    }

    while (_UserInput % 100)
    {
        _UserInput -= 100;
        --this->_hundBillCount;
    }

    while (_UserInput % 50)
    {
        _UserInput -= 50;
        --this->_fiftBillCount;
    }

    while (_UserInput % 20)
    {
        _UserInput -= 20;
        --this->_twentBillCount;
    }

    while (_UserInput % 10)
    {
        _UserInput -= 10;
        --this->_tenBillCount;
    }
    
}

std::string BANKOMAT::getId() const
{
    return this->_identification;
}

std::string BANKOMAT::returnSum() const
{
    std::string temp;
    char buffer[100];

    itoa(_currentBSum, buffer, 10);

    temp = buffer;

    return temp;
}
