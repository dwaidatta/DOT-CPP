/*
    POINTERS ->

    variable to store memory address of another variable

    & -> address-of operator
    * -> dereference operator

    pointers are of same datatype as variable
*/

#include <iostream>

int main() {

    std::string name = "Dwai";
    std::string *pName = &name;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';

    /*
        NULL value -> special value meaning it has no value
        nullptr -> keyword for a null pointer literal
    */

    int x, y;
    x = 12;
    y = 50;

    int *pX, *pY;

    pX = pY = nullptr;

    pX = &x;

    if(pX == nullptr) {
        std::cout << "address not assigned\n";
    }
    else {
        std::cout << "address assigned\n";
        std::cout << *pX << '\n';
    }

    if(pY == nullptr) {
        std::cout << "address not assigned\n";
    }
    else {
        std::cout << "address assigned\n";
        std::cout << *pY << '\n';
    }

    return 0;
}