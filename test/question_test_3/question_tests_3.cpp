#include "question3.h"
#include <iostream>
#include <cassert>

void test_binary_to_decimal() {
    std::string binary1 = "00001010";
    int result1 = binary_to_decimal(binary1);
    std::cout << "Test 1: Binary " << binary1 << " to Decimal" << std::endl;
    std::cout << "Expected: 10, Actual: " << result1 << std::endl;
    assert(result1 == 10);

    std::string binary2 = "10101010";
    int result2 = binary_to_decimal(binary2);
    std::cout << "Test 2: Binary " << binary2 << " to Decimal" << std::endl;
    std::cout << "Expected: 170, Actual: " << result2 << std::endl;
    assert(result2 == 170);

    std::string binary3 = "11111111";
    int result3 = binary_to_decimal(binary3);
    std::cout << "Test 3: Binary " << binary3 << " to Decimal" << std::endl;
    std::cout << "Expected: 255, Actual: " << result3 << std::endl;
    assert(result3 == 255);
}

int main() {
    test_binary_to_decimal();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
