#include <iostream>
#include <ctime>

int main () {
    int user_num, sys_num;

    srand(time(NULL));

    sys_num = (rand() % 10) + 1;

    std::cout << "Enter num <1 to 10>: ";
    std::cin >> user_num;

    std::cout << "Lucky number: " << sys_num << '\n';

    if (user_num == sys_num) {
        std::cout << "Correct guess!";
    }
    else {
        std::cout << "Wrong guess!";
    }

    return 0;
}