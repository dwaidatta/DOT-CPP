#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

void printData(student &stu) { // using '&' to pass by reference. don't use '&' if passing by value.
    std::cout << stu.name << '\n';
    std::cout << stu.gpa << '\n';
    std::cout << stu.enrolled << '\n';
}

int main() {

    student student1;
    student1.name = "Dwaipayan";
    student1.gpa = 8.5;
    student1.enrolled = true;

    printData(student1);

    student1.name = "Datta";

    printData(student1);

    student student2;
    student2.name = "Shraddha";
    student2.gpa = 9.2;
    student2.enrolled = true;

    printData(student2);

    return 0;
}