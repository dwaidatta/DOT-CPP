#include <iostream>

int main() {

    /*
        MEMORY ADDRESS ->

        a location in memory where data is stored

        -> accessed with "  &  " operator -> address-of operator
    */

    std::string name = "Dwai";

    int age = 12;

    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    /*
        pass by value
        pass by reference
    */

    return 0;
}