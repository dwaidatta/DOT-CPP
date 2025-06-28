#include <iostream>

int addUp(int arr[], int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result += arr[i];
    }

    return result;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    
    // when arrays are passed to funcs, the function does not know the size of array
    
    // passing an array to a func

    int n = sizeof(arr)/sizeof(arr[0]);
    int result = addUp(arr, n);

    std::cout << result << '\n';

    /*
        see ->

        SEARCHING ARRAY
        SORTING ARRAY
    */

    int size = 20;
    int numbers[size];

    // the FILL function to fill an array

    // fill(start, end, element)

    std::fill(numbers, numbers + (size/2), 11);
    std::fill(numbers + (size/2), numbers + size, 55);

    for(int i = 0; i < size; i++) {
        std::cout << numbers[i] << '\t';
    }

    return 0;
}