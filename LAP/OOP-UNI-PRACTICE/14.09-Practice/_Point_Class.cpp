#include "_Point_Class.h"
#include "_Framework.h"

POINT::POINT(int a, int b)
{
    this->x = a;
    this->y = b;
}

void POINT::printPOINT() const
{
    std::cout << "X: " << this->x << "  " << "Y: " << this->y << std::endl;
}

void POINT::initPOINT(int inputA, int inputB)
{
    this->x = inputA;
    this->y = inputB;
}

POINT POINT::operator +(POINT inputPOINT)
{
    POINT sumResult;

    sumResult.x = this->x + inputPOINT.x;
    sumResult.y = this->y + inputPOINT.y;

    return sumResult;
}

POINT POINT::operator +(int inputB)
{
    return POINT(this->x + inputB, this->y + inputB);
}

POINT POINT::operator-(POINT inputPOINT)
{
    POINT sumResult;

    sumResult.x = this->x - inputPOINT.x;
    sumResult.y = this->y - inputPOINT.y;

    return sumResult;
}

POINT POINT::operator-(int inputB)
{
    return POINT(this->x - inputB, this->y - inputB);
}

int POINT::operator*(POINT inputPOINT)
{
    return (this->x * inputPOINT.x) + (this->y * inputPOINT.y);
}

int POINT::operator*(int inputB)
{
    return ((this->x * inputB) + (this->y * inputB));
}

int POINT::operator/(POINT inputPOINT)
{
    return (this->x / inputPOINT.x) - (this->y / inputPOINT.y);
}

POINT &POINT::operator++()
{
    this->x += 1;
    this->y += 1;

    return *this;
}

POINT &POINT::operator--()
{
    this->x -= 1;
    this->y -= 1;

    return *this;
}
