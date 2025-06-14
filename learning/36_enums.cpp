#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2}; // explicitly gave the numbers. if not given then assigned from 0 -> needed.

int main() {
    
    Day today = sunday;

    // cannot use strings in switch

    switch(today) {
        case sunday: std::cout << "Sunday"; break;
        case monday: std::cout << "Monday"; break;
        case tuesday: std::cout << "Tuesday"; break;
    }   
}