// not TRUE random

#include <iostream>
#include <ctime>

int main() {
    
    srand(time(NULL));

    int num = rand();
    int num2 = (rand() % 6) + 1;

    std::cout << num << '\n';
    std::cout << num2 << '\n';

    srand(time(0));

    int num3 = rand();
    std::cout << num3;

    return 0;
}