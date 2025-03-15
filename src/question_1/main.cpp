#include <iostream>
#include <string>
#include "question1.h"

int main() {
    int num;
    std::string sequence;
    char choice;

    do {
        std::cout << "Enter a number (1 to 15) to generate Fibonacci sequence: ";
        std::cin >> num;

        if (num < 1 || num > 15) {
            std::cout << "Please enter a number between 1 and 15.\n";
            continue;
        }

        sequence = get_fib_sequence(num);

        std::cout << "Fibonacci sequence up to " << num << ": " << sequence << std::endl;

        std::cout << "Would you like to generate another Fibonacci sequence? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for using the Fibonacci sequence generator!" << std::endl;

    return 0;
}
