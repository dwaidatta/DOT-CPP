/*
    BANKING PROGRAM

    - view balance
    - deposit
    - withdraw
*/

#include <iostream>

double mainBalance = 0;

void viewBalance();
void depositAmt();
void withdrawAmt();

int main() {

    std::cout << "\n\n---- WELCOME TO BANK ----\n\n";

    int choice;

    while(true){
        std::cout << "1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n" << "4. Exit\n" << "Enter choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                viewBalance();
                continue;
            case 2:
                depositAmt();
                continue;
            case 3:
                withdrawAmt();
                continue;
            case 4:
                std::cout << "\n\n---- THANK YOU FOR USING BANK ----\n\n";
                return 0;
            default:
                std::cout << "\n\nEnter correct choice!!!\n\n";
        }
    }

    return 0;
}

void viewBalance() {
    std::cout << "\n\nBalance: " << ::mainBalance << "\n\n";
}

void depositAmt() {
    double amt;
    while(true) {
        std::cout << "Enter amt to deposit (-1 to stop deposit): ";
        std::cin >> amt;

        if(amt == -1) {
            break;
        }
        else if(amt > 0) {
            ::mainBalance += amt;
            viewBalance();
        }
        else{
            std::cout << "INVALID!!! Enter again.\n";
        }
    }
}

void withdrawAmt() {
    double amt;
    while(true) {
        viewBalance();
        std::cout << "Enter amt to withdraw (-1 to stop withdraw): ";
        std::cin >> amt;

        if(amt == -1) {
            break;
        }
        else if(::mainBalance - amt >= 0) {
            ::mainBalance -= amt;
            viewBalance();
        }
        else {
            std::cout << "INVALID!!! Enter again.\n";
        }
    }
}