#include <iostream>

int main() {

    /*
        cout <<     [insertion operator]
        cin >>      [extraction operator]


        std:getline(std::cin, string_var);
        std:getline(std::cin >> std::ws, string_var);       [eliminates newline or space characters before the user inputs]
    */

    std::string name;
    int age;


    std::cout << "Enter name: "; // reading stops at first space, so reads upto space
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is " << age;

    return 0;
}