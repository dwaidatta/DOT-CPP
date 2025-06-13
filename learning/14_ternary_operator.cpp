#include <iostream>

int main () {

    /*
        ternary operator

        ? :

        condition ? true_expression : false_expression;
    */

    int age = 19;

    (age >= 18) ? std::cout << "Adult" : std::cout << "Child";

    return 0;
}