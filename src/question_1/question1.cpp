#include "question1.h"
#include <sstream>

std::string get_fib_sequence(int n) {
    if (n <= 0) return "";

    int a = 0, b = 1;
    std::stringstream fib_sequence;

    fib_sequence << a;

    for (int i = 1; i < n; ++i) {
        fib_sequence << " " << b;
        int temp = a + b;
        a = b;
        b = temp;
    }

    return fib_sequence.str();
}
