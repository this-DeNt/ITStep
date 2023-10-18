#include "_Tram_Class.h"

Tram::Tram(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputTramType):Transport(_InputFuel, _InputManu, _InputPrice, _InputSpeed)
{
    this->_tramType = _InputTramType;
}

std::string Tram::getTramType(void) const
{
    return this->_tramType;
}

void Tram::setTramType(std::string _InputTramType)
{
    this->_tramType = _InputTramType;
}

void Tram::print(void) const
{
    Transport::print();

    std::cout << "Tram Type: " << this->getTramType() << std::endl;
}

void Tram::input(void)
{
    Transport::input();

    std::string _InputTramType;

    std::cout << "Enter Tram Type: ";
    std::cin >> _InputTramType;

    this->setTramType(_InputTramType);
}
