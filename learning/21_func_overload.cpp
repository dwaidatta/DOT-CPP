#include <iostream>

/*
    FUNCTION OVERLOADING

    see -> function signature
*/

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza();
    bakePizza("cheese");
    bakePizza("cheese", "pepper");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza" << '\n';
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza" << '\n';
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 + " " << topping2 << " pizza" << '\n';
}
