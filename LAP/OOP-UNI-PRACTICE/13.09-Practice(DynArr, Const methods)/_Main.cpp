#include "_Framework.h"
#include "_Dynamic_Arr.h"
#include "_Dynamic_Arr.cpp"

int main(void) {
    DynArr arrA(5);
    arrA.Input();
    arrA.Output();
    std::cout << std::endl;
    DynArr arrB = arrA + 10;
    arrB.Output();
    std::cout << std::endl;
    DynArr arrC = arrA * 2;
    arrC.Output();
    std::cout << std::endl;
    ++arrA;
    arrA.Output();
    std::cout << std::endl;
    DynArr arrD = arrA + arrC;
    arrD.Output();
    std::cout << std::endl;
    DynArr arrE = arrA - 3;
    arrE.Output();
    std::cout << std::endl;
    --arrA;
    arrA.Output();
}