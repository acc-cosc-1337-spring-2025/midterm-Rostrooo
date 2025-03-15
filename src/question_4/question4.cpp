#include "question4.h"

std::vector<double> get_cookie_ingredients(int cookies) {
    double sugar = 1.5 * (cookies / 48.0);
    double butter = 1.0 * (cookies / 48.0);
    double flour = 2.75 * (cookies / 48.0);

    return {sugar, butter, flour};
}
