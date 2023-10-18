#include "_Class_Circle.h"
#include <cmath>

#define PI 3.14

CircleA::CircleA(double _InputR)
{
    _r = _InputR;
}

double CircleA::getRadius(void) const
{
    return _r;
}

double CircleA::getArea(void) const
{
    return PI * pow(_r, 2);
}   
