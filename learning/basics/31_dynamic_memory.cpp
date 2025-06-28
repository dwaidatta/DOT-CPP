#include <iostream>

int main() {

    /*
        DYNAMIC memory

        memory is allocated after the program is already complied and running

        memory allocated in the heap rather than stack

    */

    int *pNum = NULL;

    pNum = new int; // new keyword for dynamic memory

    *pNum = 25;

    std::cout << "address\t\t" << pNum << '\n';
    std::cout << "value\t\t" << *pNum << '\n';

    delete pNum; // best to use 'delete' after using 'new'

    char *pGrades = NULL;

    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade: ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << pGrades[i] << '\t';
    }

    delete pGrades;


    return 0;
}