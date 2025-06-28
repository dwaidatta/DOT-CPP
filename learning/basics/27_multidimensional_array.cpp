#include <iostream>

int main() {

    int arr[2][3];

    // row size can be blank
    int arr2[][2] = {{1, 2}, 
                     {3, 4},
                     {5, 6}};

    // print as required

    int rows = sizeof(arr2)/sizeof(arr2[0]);
    int cols = sizeof(arr2[0])/sizeof(arr2[0][0]);

    std::cout << rows << '\t';
    std::cout << cols << '\t';


    return 0;
}