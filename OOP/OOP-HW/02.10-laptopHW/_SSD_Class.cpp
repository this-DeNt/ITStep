#include "_SSD_Class.h"

SSD::SSD():_name(nullptr), _capacity(0)
{
    this->_price = 0;
}

SSD::SSD(const std::string _InputName, const double _InputPrice, const double _Inputmemory):_name(_InputName), _capacity(_Inputmemory)
{
    this->_price = _InputPrice;
}

SSD::SSD(SSD &_InputSSD):_name(_InputSSD._name), _capacity(_InputSSD._capacity)
{
    this->_price = _InputSSD._price;
}

std::string SSD::getName() const
{
    return this->_name;
}

double SSD::getPrice() const
{
    return this->_price;
}

void SSD::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}