#include "_Class_Square.h"

Square::Square(double _InputS)
{
    _side = _InputS;
}

double Square::getSide(void) const
{
    return _side;
}

double Square::getArea(void) const
{
    return _side * _side;
}
