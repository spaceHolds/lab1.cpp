#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double a = 2, b = 14.36, c = 2, d = 200, resultOne, resultTwo;
    resultOne = (8.15 * pow(b * log(a), 1.0 / 3.0)) / (24.38 * cos(b) * (exp(a) - pow(a, a)));

    resultTwo = (11.21 * (1 + log(d / c))) / (1 - sin(c / d * M_PI)) * (cos(c / d * M_PI));

    cout << resultOne << endl;
    cout << resultTwo << endl;
    return 0;
}
