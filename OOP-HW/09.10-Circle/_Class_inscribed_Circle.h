#pragma once
#include "_Class_Circle.h"
#include "_Class_Square.h"

class Inscribed: public Square, public CircleA {

public:

    Inscribed(double _r);

    bool isInscribed(void) const;
};