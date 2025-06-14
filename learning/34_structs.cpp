/*
    STRUCTS

    group related variables under a same name
*/

#include <iostream>

struct student {
    // variables are 'members'

    std::string name;
    double gpa;
    bool enrolled = true; // default value if not assigned
};

int main() {

    student student1;
    student1.name = "Dwaipayan";
    student1.gpa = 8.5;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';


    student student2;
    student2.name = "Shraddha";
    student2.gpa = 9.2;
    student2.enrolled = true;

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}