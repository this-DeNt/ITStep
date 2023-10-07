#include "_RAM_Class.h"

RAM::RAM():_name(nullptr), _memory(0)
{
    this->_price = 0;
}

RAM::RAM(const std::string _InputName, const double _InputPrice, const double _Inputmemory):_name(_InputName), _memory(_Inputmemory)
{
    this->_price = _InputPrice;
}

RAM::RAM(RAM &_InputRAM):_name(_InputRAM._name), _memory(_InputRAM._memory)
{
    this->_price = _InputRAM._price;
}

std::string RAM::getName() const
{
    return this->_name;
}

double RAM::getPrice() const
{
    return this->_price;
}

void RAM::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}