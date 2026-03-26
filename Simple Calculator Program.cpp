#include <iostream>
using namespace std;

int main() {
    int value1, value2;

    // Ask the user to enter two numbers
    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    // Perform basic arithmetic operations
    int sum = value1 + value2;
    int difference = value1 - value2;
    int product = value1 * value2;
    int quotient = 0;
    int remainder = 0; // modulus result

    // Check if the second number is not zero before dividing
    if (value2 != 0) {
        quotient = value1 / value2;
        remainder = value1 % value2;
    } else {
        cout << "\nWarning: Cannot divide or take modulus by zero.\n";
    }

    // Display the results
    cout << "\n--- Results ---\n";
    cout << "First Value = " << value1 << endl;
    cout << "Second Value = " << value2 << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    if (value2 != 0) {
        cout << "Quotient = " << quotient << endl;
        cout << "Remainder = " << remainder << endl;
    }

    cout << "\nThank you for using the program!\n";

    return 0;
}
