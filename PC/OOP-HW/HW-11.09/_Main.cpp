#include "_Framework.h"
#include "_Class_Framework.h"
#include "_Laptop_Class.h"
#include "_Laptop_Class.cpp"

int main(void) {

    LAPTOP laptopA("TUF", "Intel", 20, 8, 16, 3.2, "RTX", 30, 16, 5.5, "Fury", "DDR5", 15, 32, "Asus", 200, 168, 256);
    laptopA.printSpecs();
    laptopA.printCount();
    LAPTOP laptopB = laptopA;
    laptopB.printSpecs();
    laptopB.printCount();
}