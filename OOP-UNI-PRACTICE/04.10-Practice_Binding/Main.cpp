#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

#include <iostream>

int main()
{
    Figure* _ptr = nullptr;

    std::cout << "1. Circle" << std::endl << "2. Rect" << std::endl << "3. Tri " << std::endl << "> ";

    int x;
    std::cin >> x;

    switch (x)
    {
    case 1:
        _ptr = new Circle();
        break;
    case 2:
        _ptr = new Rectangle();
        break;
    case 3:
        _ptr = new Triangle();
        break;
    
    default:
        break;
    }



    return 0;
}