#include <iostream>

int main() {
    // double pi = 3.14;
    /*
        we want to make the value of PI a constant so that no one is able to change it
        we use the const keyword to make it read-only
        var name -> to CAPITAL
    */

    const double PI = 3.14; // constant

    double radius = 5.25;
    double circumference = 2 * PI * radius;

    std::cout << circumference << '\n';

    return 0;
}