/*
    CONSTRUCTOR ->

    - special method that is automatically called in a class when an object is made

    - useful for assigning values to attributes as arguments
*/

#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa) {
        // constructor has same name as class

        this->name = name;
        this->age = age;
        this->gpa = gpa; // object_attribute = incoming_argument
    }

    // Student(std::string x, int y, double z) {
    //     name = x;
    //     age = y;
    //     gpa = z;
    //     // no need to use as 'this' as parameters name are different
    // }

    // without a explicit constructor, a constructor is always called behind the scenes
};

int main() {

    Student student1("Dwai", 10, 8.5);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    return 0;
}