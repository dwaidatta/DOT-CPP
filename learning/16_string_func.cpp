#include <iostream>

int main () {

    std::string name;
    
    std::cout << "Enter name: ";
    std::getline(std::cin, name);

    int len = name.length();
    std::cout << len << '\n';

    // name.clear()
    // clears name

    std::cout << name.empty() << '\n';
    std::cout << name.append(" COOL") << '\n';
    std::cout << name.at(2) << '\n';

    name.insert(1, "#");
    std::cout << name << '\n';

    name.erase(0, 3); // erases from str[0] to str[n-1]
    std::cout << name << '\n';
    

    return 0;
}