#pragma once

class CircleA {

protected:

    double _r;

public:

    CircleA(double _InputR);

    double getRadius(void) const;
    double getArea(void) const;
};