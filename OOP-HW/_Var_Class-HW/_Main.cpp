#include "framework.h"
#include "classFramework.h"

int main(void) {

    var<int> a;
    var<int> b;

    a += 2;
    b += 2;

    var<int> c = a + b;

    c.print();
}