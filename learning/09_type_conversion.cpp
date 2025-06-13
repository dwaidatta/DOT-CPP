#include <iostream>

int main() {
    
    /*
        type conversion

        implicit -> automatic done by system
        explicit -> done by user
    */

    double x;
    int a = 5;
    int b = 2;
    x = double(a) / b;

    std::cout << x << '\n';
    std::cout << char(65) << '\n';


    return 0;
}