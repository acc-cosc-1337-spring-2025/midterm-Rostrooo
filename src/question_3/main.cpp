#include <iostream>
#include <string>
#include "question3.h"

bool is_valid_binary(const std::string& binary) {
    if (binary.length() != 8) return false;
    for (char c : binary) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

int main() {
    std::string binary;
    char exit_char;

    while (true) {
        std::cout << "Enter an 8-bit binary number (or any character to exit): ";
        std::cin >> binary;

        if (binary.length() != 8 || !is_valid_binary(binary)) {
            std::cout << "Invalid input! Please enter a binary number with exactly 8 bits, containing only 0s and 1s." << std::endl;
            continue;
        }

        int decimal = binary_to_decimal(binary);
        std::cout << "The decimal value of " << binary << " is: " << decimal << std::endl;

        std::cout << "Do you want to enter another binary number? (y/n): ";
        std::cin >> exit_char;
        if (exit_char != 'y' && exit_char != 'Y') {
            break;
        }
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
