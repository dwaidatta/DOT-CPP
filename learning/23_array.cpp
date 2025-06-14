#include <iostream>

int main() {
    /*  
        ARRAY

        - multiple values of same kind
        - values accessed by index
    */

    std::string cars[] = {"BMW", "TATA", "TESLA"};

    std::cout << cars << '\n'; // just prints the memory address of the array

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    cars[1] = "FORD";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    int prices[3];

    prices[0] = 1;
    prices[1] = 2;
    prices[2] = 3;

    return 0;
}