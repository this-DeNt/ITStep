#pragma once

class Square {

protected:

    double _side;

public:

    Square(double _InputS);

    double getSide(void) const;
    double getArea(void) const;
};