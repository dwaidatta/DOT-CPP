#include <iostream>

int main() {

    // sizeof() -> determines the size in bytes

    std::string name = "Dwai";
    double num1 = 1.2;
    int num2 = 1;

    std::cout << sizeof(name) << '\n';
    std::cout << sizeof(num1) << '\n';
    std::cout << sizeof(num2) << '\n';

    std::cout << sizeof(double) << '\n';

    int arr[] = {1, 2, 3, 4, 5};

    int elements = sizeof(arr)/sizeof(arr[0]);
    // = sizeof(array)/sizeof(data_type)
    int elements2 = sizeof(arr)/sizeof(int);

    std::cout << elements << " elements.\n";
    std::cout << elements2 << " elements.";

    return 0;
}