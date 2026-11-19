#include <iostream>

#include "ledger.h"

int main() {
    int choice;

    do {
        std::cout << "\nLEDGER\n";
        std::cout << "1. Add Transactions\n";
        std::cout << "2. View Transactions\n";
        std::cout << "3. View Balance\n";
        std::cout << "4. Monthly Summary\n";
        std::cout << "5. Search Transactions\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        switch (choice) {
            case 1: std::cout << "\nadded transaction\n"; break;
            case 2: std::cout << "\nviewing transactions\n"; break;
            case 3: std::cout << "\nviewing balance\n"; break;
            case 4: std::cout << "\nviewing monthly summary\n"; break;
            case 5: std::cout << "\nsearching transactions\n"; break;
            default: std::cout << "\nsee you later!\n"; break;
        }
    } while (choice != 0);

    return 0;
}