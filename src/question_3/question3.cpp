#include "question3.h"
#include <iostream>

int binary_to_decimal(const std::string& binary) {
    int decimal = 0;
    for (int i = 0; i < 8; ++i) {
        if (binary[i] == '1') {
            decimal += (1 << (7 - i));
        }
    }
    return decimal;
}
