#include "question2.h"
#include <iostream>

int main() {
    int a = 5, b = 15;
    std::cout << "Before modification: a = " << a << ", b = " << b << std::endl;
    modify_parameters_test(a, b);
    std::cout << "After modification: a = " << a << ", b = " << b << std::endl;
    return 0;
}
