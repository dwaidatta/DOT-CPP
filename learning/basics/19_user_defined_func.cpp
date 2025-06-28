#include <iostream>

// function -> reusable part of code

void hbd () {
    std::cout << "Happy Birthday!" << '\n';
}

void hello (std::string name, int age);

int main () {

    hbd();

    std::string name = "Bheem";
    int age = 10;

    hello(name, age);

    return 0;
}

void hello (std::string name, int age) {
    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is " << age << '\n';
}