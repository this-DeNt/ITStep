#include "framework.h"
#include "_Matrix_Class.h"

int main(void) {

    MATRIX<int> obj(4, 4);
    obj(20);
    MATRIX<int> obj2 = obj;

}