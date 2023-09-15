#include "_Framework.h"
#include "_Class_Framework.h"

int main(void) {

    DATE dateA(29, 1, 2023);

    dateA.printDATE();

    dateA++;
    dateA.printDATE();
    ++dateA;
    dateA.printDATE();
    // dateA--;
    // dateA.printDATE();
    // --dateA;
    // dateA.printDATE();

    dateA = dateA + 10;
    dateA.printDATE();
    dateA += 10;
    dateA.printDATE();
    dateA -= 10;
    dateA.printDATE();
    dateA = dateA - 10;
    dateA.printDATE();

    DATE dateB(1, 1, 2000);

    dateA += 10;
    dateA = dateA - dateB;
    dateA.printDATE();

    bool x = dateA > dateB;

    std::cout << x << std::endl;
    std::cout << (x = dateA < dateB) << std::endl;
    std::cout << (x = dateA >= dateB) << std::endl;
    std::cout << (x = dateA <= dateB) << std::endl;
    std::cout << (x = dateA == dateB) << std::endl;
    std::cout << (x = dateA != dateB) << std::endl;
}