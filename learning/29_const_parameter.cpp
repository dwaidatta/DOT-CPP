#include <iostream>

void showAge(const int age) {
    // age = 25;
    // using const parameter does not let changing the value
    std::cout << age << '\n';
}

int main() {

    int age = 10;
    showAge(age);

    return 0;
}