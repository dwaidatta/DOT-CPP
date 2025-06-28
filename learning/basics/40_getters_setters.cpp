/*
    ABSTRACTION -> hiding unnecessary data from outside a class

    getter -> function that makes a private attribute READ-able
    setter -> function that makes a private attribute WRITE-able
*/

#include <iostream>

class Stove {
    private:
        int temperature = 125;
    public:

        Stove(int temperature) { // constructor
            // we are calling the setTemperature()
            // could have initialized directly but still using the setTemperature()
            setTemperature(temperature);
        }

        int getTemperature() {
            return temperature;
        }

        void setTemperature(int temperature) {

            // we can also set if conditions to check if we accept the value for the temp

            this->temperature = temperature;
        }
};

int main() {

    Stove stove(250);

    std::cout << stove.getTemperature() << '\n';
    stove.setTemperature(40);
    std::cout << stove.getTemperature() << '\n';


    return 0;
}