#include <iostream>

int factorial(int n) {
    int result = 1;
    if(n > 0) {
        result = n * factorial(n - 1);
    }
    else {
        return result;
    }
    return result;
}

int main() {
    /*
        RECURSION
    */

    int ans = factorial(5); 

    std::cout << ans;

    return 0;
}