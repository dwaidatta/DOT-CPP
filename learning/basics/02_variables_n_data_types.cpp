#include <iostream>

int main() {
    
    int x; // declaration
    x = 12; // assignment

    int y = 5; // declaration and assignment

    std::cout << x << '\n';
    std::cout << y << '\n';


    // data types
    /*
        int     integer     whole number
        double  double      decimal points
        char    character   characters
        bool    boolean     true/false
        string  string      sequence of characters
    */

    int days = 10;
    double price = 50.99;
    char grade = 'B';
    bool power = true;


    std::cout << days <<'\n';
    std::cout << price <<'\n';
    std::cout << grade <<'\n';
    std::cout << power <<'\n';

    // strings are objects that represent a sequence of characters

    std::string name = "Dwaipayan";
    std::string day = "Sunday";

    std::cout << name << '\n';
    std::cout << day << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "Today is " << day << ". We are feeling good." << '\n';

    return 0;
}