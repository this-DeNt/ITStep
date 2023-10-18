#include "framework.h"
#include "_Matrix_Class.h"

class A {

    int _x;
    int _y;

public:

    A() = default;
    A(int x, int y);
    A& operator+(const A& _inputA);
    A& operator-(const A& _inputA);
};

int main(void) {

    MATRIX<int> obj(4, 4);
    obj(20);
    MATRIX<int> obj2 = obj;
    MATRIX<A> test(10, 10);
    MATRIX<A> test2(10, 10);

}

A::A(int x, int y)
{
    this->_x = x;
    this->_y = y;
}

A &A::operator+(const A &_inputA)
{
    A temp(this->_x, this->_y);

    temp._x += _inputA._x;
    temp._y += _inputA._y;

    return temp;
}

A &A::operator-(const A &_inputA)
{
    A temp(this->_x, this->_y);

    temp._x -= _inputA._x;
    temp._y -= _inputA._y;

    return temp;
}