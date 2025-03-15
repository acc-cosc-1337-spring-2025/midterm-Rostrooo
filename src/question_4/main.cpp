#include <iostream>
#include <vector>
#include <string>
#include "question4.h"

bool is_valid_input(const std::string& input) {
    for (char c : input) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    std::string input;
    int cookies;

    while (true) {
        std::cout << "Enter the number of cookies to bake (or type 'exit' to quit): ";
        std::cin >> input;

        if (input == "exit") break;

        if (!is_valid_input(input)) {
            std::cout << "Invalid input! Please enter a valid number." << std::endl;
            continue;
        }

        cookies = std::stoi(input);
        if (cookies <= 0) {
            std::cout << "Please enter a positive number of cookies." << std::endl;
            continue;
        }

        std::vector<double> ingredients = get_cookie_ingredients(cookies);

        std::cout << "For " << cookies << " cookies, you need:" << std::endl;
        std::cout << "Cups of Sugar: " << ingredients[0] << std::endl;
        std::cout << "Cups of Butter: " << ingredients[1] << std::endl;
        std::cout << "Cups of Flour: " << ingredients[2] << std::endl;
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
