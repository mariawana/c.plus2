#include <iostream>

int main() {
    int age;

    std::cout << "Enter age: ";
    std::cin >> age;

    if (age < 10) {
        std::cout << "Children";
    }

    if (age >= 10 && age < 18) {
        std::cout << "Minor";
    }

    if (age >= 18 && age < 30) {
        std::cout << "Young Adult";
    }

    if (age >= 30 && age < 60) {
        std::cout << "Adult";
    }

    if (age >= 60 && age < 100) {
        std::cout << "Senior";
    }

    return 0;
}
