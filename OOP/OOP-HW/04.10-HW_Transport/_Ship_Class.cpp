#include "_Ship_Class.h"

Ship::Ship(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputShipType):Transport(_InputFuel, _InputManu, _InputPrice, _InputSpeed)
{
    this->_shipType = _InputShipType;
}

std::string Ship::getShipType(void) const
{
    return this->_shipType;
}

void Ship::setShipType(std::string _InputShipType)
{
    this->_shipType = _InputShipType;
}

void Ship::print(void) const
{
    Transport::print();

    std::cout << "Ship Type: " << this->getShipType() << std::endl;
}

void Ship::input(void)
{
    Transport::input();

    std::string _InputShipType;

    std::cout << "Enter Ship Type: ";
    std::cin >> _InputShipType;

    this->setShipType(_InputShipType);
}
