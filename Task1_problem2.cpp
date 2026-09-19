#include <iostream>
using namespace std;

/*
    Task 1 – Problem 2

    Demonstrates arrays in C++:
    1. One-Dimensional Array (1D)
    2. Two-Dimensional Array (2D)

    Users can input their own values for better demonstration.
    Menu allows switching between 1D and 2D array demonstration.
*/

int main() {
    int option; // Variable to store user’s menu selection
    do {
        // ----------------- Display Menu -----------------
        cout << "\n===== ARRAY DEMONSTRATION MENU =====" << endl;
        cout << "1. One-Dimensional Array" << endl;
        cout << "2. Two-Dimensional Array" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        // ----------------- One-Dimensional Array -----------------
        if(option == 1) {
            int numbers[5]; // 1D array of 5 integers

            cout << "\n--- One-Dimensional Array ---" << endl;
            cout << "Enter 5 integers:" << endl;

            for(int i = 0; i < 5; i++) {
                cout << "Element [" << i << "]: ";
                cin >> numbers[i]; // Store input in array
            }

            cout << "\nThe 1D array you entered:" << endl;
            for(int i = 0; i < 5; i++) {
                cout << "Element [" << i << "] = " << numbers[i] << endl;
            }

        // ----------------- Two-Dimensional Array -----------------
        } else if(option == 2) {
            int matrix[2][3]; // 2x3 2D array

            cout << "\n--- Two-Dimensional Array ---" << endl;
            cout << "Enter values for a 2x3 matrix:" << endl;

            for(int row = 0; row < 2; row++) {
                for(int col = 0; col < 3; col++) {
                    cout << "Element [" << row << "][" << col << "]: ";
                    cin >> matrix[row][col]; // Store input
                }
            }

            cout << "\nThe 2x3 matrix you entered:" << endl;
            for(int row = 0; row < 2; row++) {
                for(int col = 0; col < 3; col++) {
                    cout << matrix[row][col] << "\t"; // Display matrix
                }
                cout << endl;
            }

        // ----------------- Invalid Choice -----------------
        } else if(option != 0) {
            cout << "Invalid selection! Please choose 1, 2, or 0." << endl;
        }

    } while(option != 0); // Repeat until user exits

    cout << "Program terminated. Thank you!" << endl;
    return 0;
}
