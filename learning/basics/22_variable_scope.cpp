#include <iostream>

/*
    LOCAL variables -> declared inside a func/block
    GLOBAL variables -> declared outside of all funcs

    functions cannot see inside of other functions

    LOCAL scope gets preference over GLOBAL scope unless explicitly specified
*/

int mynum = 3;

void k1() {
    int mynum = 2; // local scope of k1()
    std::cout << mynum << '\n';
}

int main() {

    int mynum = 1; // local scope of main
    std::cout << mynum << '\n';

    k1();

    std::cout << ::mynum; // GLOBAL scope mynum

    return 0;
}

