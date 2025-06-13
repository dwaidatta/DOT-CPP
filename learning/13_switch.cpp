#include <iostream>

int main () {
    // switch -> alternative to many if-else if-else statements

    int day = 2;
    std::string day_name;

    switch (day) {
        case 1:
            day_name = "Sunday";
            break; // to prevent cascading
        case 7:
            day_name = "Saturday";
            break; // to prevent cascading
        default:
            day_name = "Weekday/Otherday.";
    }

    std::cout << day_name;

    return 0;
}