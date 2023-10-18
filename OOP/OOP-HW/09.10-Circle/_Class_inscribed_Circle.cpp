#include "_Class_inscribed_Circle.h"

Inscribed::Inscribed(double _Ir):Square(_Ir * 2), CircleA(_Ir)
{
}

bool Inscribed::isInscribed(void) const
{
    return (CircleA::getRadius() == (Square::getSide() / 2));
}
