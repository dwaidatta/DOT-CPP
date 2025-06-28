#include <iostream>

int main() {

    int age = 24;

    if (age >= 18) {
        std::cout << "Adult";
    }
    else if (age <= 0) {
        std::cout << "Not born";
    }
    else {
        std::cout << "Child";
    }

    return 0;
}