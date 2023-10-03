#include "_GPU_Class.h"
#include "framework.h"

GPU::GPU():_name(nullptr)
{
    this->_price = 0.0;
    this->_memory = 0.0;
}

GPU::GPU(const std::string _InputName, const double _InputPrice, const double _InputMemory):_name(_InputName)
{
    this->_price = _InputPrice;
}

GPU::GPU(GPU &_InputGPU):_name(_InputGPU._name)
{
    this->_price = _InputGPU._price;
    this->_memory = _InputGPU._memory;
}

std::string GPU::getName() const
{
    return this->_name;
}

double GPU::getPrice() const
{
    return this->_price;
}

double GPU::getMemory() const
{
    return this->_memory;
}

void GPU::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}