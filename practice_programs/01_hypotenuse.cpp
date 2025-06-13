/*
    calculate the hypotenuse of a triangle when its perpendicular and base are given
*/

#include <iostream>
#include <cmath>

int main() {

    double b, p, h;
    std::cout << "Base: ";
    std::cin >> b;
    std::cout << "Perpendicular: ";
    std::cin >> p;

    //  h = sqrt(b^2 + p^2);

    h = sqrt(pow(b, 2) + pow(p, 2));
    std::cout << "Hypotenuse: " << h;

    return 0;
}