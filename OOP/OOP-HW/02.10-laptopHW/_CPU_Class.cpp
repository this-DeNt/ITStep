#include "_CPU_Class.h"
#include "framework.h"

CPU::CPU():_name(nullptr)
{
    this->_price = 0.0;
    this->_GHz = 0.0;
}

CPU::CPU(const std::string _InputName, const double _InputPrice, const double _InputGHz):_name(_InputName)
{
    this->_price = _InputPrice;
    this->_GHz = _InputGHz;
}

CPU::CPU(CPU &_InputCPU):_name(_InputCPU._name)
{
    this->_price = _InputCPU._price;
    this->_GHz = _InputCPU._GHz;
}

std::string CPU::getName() const
{
    return this->_name;
}

double CPU::getPrice() const
{
    return this->_price;
}

double CPU::getGHz()
{
    return this->_GHz;
}

void CPU::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}

void CPU::setGHz(const double _InputGHz)
{
    this->_GHz = _InputGHz;
}
