/*
    OBJECT ORIENTED PROGRAMMING

    OBJECT -> collection of ATTRIBUTES and METHODS
    CLASS -> Blueprint to create objects
*/

#include <iostream>

class Human {
    public: // access modifier

        // ATTRIBUTES

        std::string name;
        std::string job;
        int age;
        bool status = true;

        // METHODS

        void eat() {
            std::cout << name << " eating!\n";
        }
        
        void sleep() {
            std::cout << name << " sleeping!\n";
        }
};

int main() {

    Human human1;

    human1.name = "Dwai";
    human1.job = "Super Sleeper";
    human1.age = 12;

    std::cout << human1.name << '\n';
    std::cout << human1.job << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.status << '\n';

    human1.eat();
    human1.sleep();

    return 0;
}