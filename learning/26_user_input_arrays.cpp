#include <iostream>

int main() {

    int n;

    std::cout << "Enter # of elements: ";
    std::cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter #: ";
        std::cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << '\t'; 
    }

    return 0;
}