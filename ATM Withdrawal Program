#include <iostream>

int main() {
    int deposit, withdraw;
    int thousand, fiveHundred, twoHundred, oneHundred, fifty;

    std::cout << "Enter deposit amount: ";
    std::cin >> deposit;

    std::cout << "Enter withdraw amount: ";
    std::cin >> withdraw;

    if (withdraw > deposit) {
        std::cout << "Transaction failed. Not enough balance.\n";
    } else {

        deposit = deposit - withdraw;

        thousand = withdraw / 1000;
        withdraw = withdraw % 1000;

        fiveHundred = withdraw / 500;
        withdraw = withdraw % 500;

        twoHundred = withdraw / 200;
        withdraw = withdraw % 200;

        oneHundred = withdraw / 100;
        withdraw = withdraw % 100;

        fifty = withdraw / 50;
        withdraw = withdraw % 50;

        std::cout << "\nBills breakdown:\n";
        std::cout << "1000: " << thousand << std::endl;
        std::cout << "500: " << fiveHundred << std::endl;
        std::cout << "200: " << twoHundred << std::endl;
        std::cout << "100: " << oneHundred << std::endl;
        std::cout << "50: " << fifty << std::endl;

        std::cout << "\nRemaining balance: " << deposit << std::endl;
    }

    return 0;
}
