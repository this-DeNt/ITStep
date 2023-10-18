#include <iostream>
#define PI 3.14159


#include "Circle.h"

using namespace std;

void Circle::ShowArea() const
{
    cout << "Area of circle: " << PI * m_value1 * m_value2 << endl;
}