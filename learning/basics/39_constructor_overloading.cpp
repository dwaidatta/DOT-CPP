/*
    CONSTRUCTOR OVERLOADING
*/

#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;
    
    Pizza() {

    }
    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main() {

    Pizza noToping;
    Pizza oneToping("cheese");
    Pizza twoToping("tomato", "olive");

    std::cout << "Succesful!!!";

    return 0;
}