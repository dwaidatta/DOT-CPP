#include <iostream>

// instead of using typedef
// we use using keyword
// using -> more suitable for templates

using number_t = int;
using string_t = std::string;

int main() {
    string_t day = "Sunday";
    number_t age = 10;

    std::cout << day << '\n';
    std::cout << age << '\n';

    return 0;
}