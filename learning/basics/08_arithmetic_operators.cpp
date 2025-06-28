#include <iostream>

/*
    ORDER ->

    parenthesis
    multiplication and division
    addition and subtraction

    + - * / %
    ++
    --
*/

int main() {
    int sum = 20;

    sum = sum + 1;

    /*
        sum += 1;
        sum++;
    */

    sum = sum - 1;

    /*
        sum -= 1;
        sum--
    */

    sum *= 2;
    sum /= 2;

    std::cout << sum << '\n';

    // use double to get decimal points

    int remainder = 20 % 3;
    std::cout << remainder << '\n';

    return 0;

}