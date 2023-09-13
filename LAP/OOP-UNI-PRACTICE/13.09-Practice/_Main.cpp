#include "_Framework.h"
#include "_Dynamic_Arr.h"
#include "_Dynamic_Arr.cpp"

int main(void) {

    DynArr arrA(10);
    arrA.Input();
    arrA.Output();
    std::cout << std::endl;
    arrA.sort();
    arrA.Output();
    std::cout << std::endl;
    arrA.reverse();
    arrA.Output();
    std::cout << std::endl;
    std::cout << "Index of the first 18: " << arrA.search(18) << std::endl;
    arrA.resize(15);
    arrA.Output();
}