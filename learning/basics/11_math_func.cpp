#include <iostream>
#include <cmath> // math library

int main() {
    
    double x = 1;
    double y = 3;
    double z;

    z = std::max(x, y);
    std::cout << z << '\n';
    z = std::min(x, y);
    std::cout << z << '\n';

    z = pow(2, 3);
    std::cout << z << '\n';
    z = sqrt(9);
    std::cout << z << '\n';
    z = abs(-1.2);
    std::cout << z << '\n';

    // [round, ceil, floor, etc]

    return 0;
}