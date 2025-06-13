#include <iostream>

double area (double side) {
    double result = side * side;
    return result;
}

int main () {
    double side = 1.5;
    double result = area(side);

    std::cout << "Area: " << result;

    return 0;
}