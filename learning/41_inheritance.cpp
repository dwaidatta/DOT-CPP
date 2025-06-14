/*
    INHERITANCE

    - A class can recieve attributes and methods from another class

    - Children classes inherit from Parent class
*/

#include <iostream> 

class Animal {
    public:
        bool alive = true;
    void eat() {
        std::cout << "Eating!\n";
    }
};

class Dog : public Animal {
    public:

    void bark() {
        std::cout << "Barking!\n";
    }
};

class Cat : public Animal {
    public:

    void meow() {
        std::cout << "Meowing!\n";
    }
};

int main() {

    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cat cat;

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    return 0;
}