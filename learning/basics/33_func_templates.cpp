/*
    FUNCTION TEMPLATES

    describes what a function looks like

    can be used to generate as many overloaded functions as needed each using different data types
*/

#include <iostream>

// int max(int x, int y) {
//     return (x >= y) ? x : y;
// }
// double max(double x, double y) {
//     return (x >= y) ? x : y;
// }
// char max(char x, char y) {
//     return (x >= y) ? x : y;
// }

template <typename T, typename U>

auto max(T x, U y) {
    // auto -> decides which value to return. could be T or U too if needed.

    return (x >= y) ? x : y;
}

int main() {
    std::cout << max(1, 5) << '\n';
    std::cout << max(1.3, 5.2) << '\n';
    std::cout << max('A', 'K') << '\n';
    std::cout << max(2, 4.5) << '\n';
}