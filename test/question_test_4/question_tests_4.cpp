#include "question4.h"
#include <iostream>
#include <cassert>

void test_get_cookie_ingredients() {
    std::vector<double> result1 = get_cookie_ingredients(48);
    assert(result1[0] == 1.5);
    assert(result1[1] == 1.0);
    assert(result1[2] == 2.75);

    std::vector<double> result2 = get_cookie_ingredients(96);
    assert(result2[0] == 3.0);
    assert(result2[1] == 2.0);
    assert(result2[2] == 5.5);

    std::vector<double> result3 = get_cookie_ingredients(24);
    assert(result3[0] == 0.75);
    assert(result3[1] == 0.5);
    assert(result3[2] == 1.375);
}

int main() {
    test_get_cookie_ingredients();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
