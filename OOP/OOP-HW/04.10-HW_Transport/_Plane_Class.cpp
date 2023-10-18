#include "_Plane_Class.h"

Plane::Plane(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputPlaneType):Transport(_InputFuel, _InputManu, _InputPrice, _InputSpeed)
{
    this->_planeType = _InputPlaneType;
}

std::string Plane::getPlaneType(void) const
{
    return this->_planeType;
}

void Plane::setPlaneType(std::string _InputPlaneType)
{
    this->_planeType = _InputPlaneType;
}

void Plane::print(void) const
{
    Transport::print();

    std::cout << "Plane Type: " << this->getPlaneType() << std::endl;
}

void Plane::input(void)
{
    Transport::input();

    std::string _InputPlaneType;

    std::cout << "Enter Plane Type: ";
    std::cin >> _InputPlaneType;

    this->setPlaneType(_InputPlaneType);
}
