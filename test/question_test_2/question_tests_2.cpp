#include "question2.h"
#include <iostream>
#include <cassert>

void test_modify_parameters_test() {
    // Test 1: Check that value parameter doesn't change
    int a = 5, b = 15;
    modify_parameters_test(a, b);
    std::cout << "Test 1: Value should remain unchanged, but reference should change." << std::endl;
    std::cout << "Expected: a = 5, b = 20" << std::endl;
    std::cout << "Actual: a = " << a << ", b = " << b << std::endl;
    assert(a == 5);  // Assert that 'a' remains unchanged
    assert(b == 20); // Assert that 'b' is updated by reference

    // Test 2: Check that reference parameter is updated correctly
    int x = 10, y = 25;
    modify_parameters_test(x, y);
    std::cout << "Test 2: Check if reference is updated correctly." << std::endl;
    std::cout << "Expected: x = 10, y = 20" << std::endl;
    std::cout << "Actual: x = " << x << ", y = " << y << std::endl;
    assert(x == 10);  // Assert that 'x' remains unchanged
    assert(y == 20);  // Assert that 'y' is updated by reference
}

int main() {
    test_modify_parameters_test();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
