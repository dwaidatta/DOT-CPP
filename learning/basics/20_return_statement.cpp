#include <iostream>

/*
    return keyword
    return values from functions
*/

double area (double side) {
    double result = side * side;
    return result;
}

double volume (double side) {
    double result = side * side * side;
    return result;
}

std::string strConcat(std::string firstname, std::string lastname) {
    return firstname + " " + lastname;
}

int main () {
    double side = 1.5;
    
    double area_result = area(side);
    double vol_result = volume(side);

    std::cout << "Area: " << area_result << '\n';
    std::cout << "Volume: " << vol_result << '\n';

    std::string firstname = "Dwaipayan";
    std::string lastname = "Datta";

    std::string fullname = strConcat(firstname, lastname);

    std::cout << "Your name is " << fullname;

    return 0;
}