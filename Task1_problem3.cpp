#include <iostream>
using namespace std;

/*
    Task 1 – Problem 3
    Solves the following array problems:
    1. One-Dimensional Array:
       - Input and display marks of 5 students
       - Calculate and display the average
    2. Two-Dimensional Array:
       - Input and display a 2x3 matrix
       - Calculate and display the sum of all elements
    The program provides a menu for the user to choose which problem to solve.
*/

int main() {
    int option; // Menu selection
    do {
        // ----------------- Display Menu -----------------
        cout << "\n===== ARRAY PROBLEMS MENU =====" << endl;
        cout << "1. One-Dimensional Array (Student Marks)" << endl;
        cout << "2. Two-Dimensional Array (2x3 Matrix)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        // ----------------- One-Dimensional Array -----------------
        if(option == 1) {
            int studentMarks[5]; // Array to store marks
            int total = 0;       // Sum of marks
            double average;      // Average of marks

            cout << "\nEnter marks for 5 students:\n";
            for(int i = 0; i < 5; i++) {
                cout << "Student #" << i+1 << ": ";
                cin >> studentMarks[i];
                total += studentMarks[i]; // Add to total
            }

            average = total / 5.0; // Compute average

            cout << "\nMarks of Students:\n";
            for(int i = 0; i < 5; i++) {
                cout << "Student #" << i+1 << ": " << studentMarks[i] << endl;
            }
            cout << "Average Marks: " << average << endl;

        // ----------------- Two-Dimensional Array -----------------
        } else if(option == 2) {
            int matrix[2][3]; // 2x3 matrix
            int sum = 0;      // Sum of all elements

            cout << "\nEnter elements for a 2x3 matrix:\n";
            for(int row = 0; row < 2; row++) {
                for(int col = 0; col < 3; col++) {
                    cout << "Element [" << row << "][" << col << "]: ";
                    cin >> matrix[row][col];
                    sum += matrix[row][col]; // Add element to sum
                }
            }

            cout << "\nMatrix:\n";
            for(int row = 0; row < 2; row++) {
                for(int col = 0; col < 3; col++) {
                    cout << matrix[row][col] << "\t"; // Display element
                }
                cout << endl;
            }
            cout << "Sum of all elements: " << sum << endl;

        // ----------------- Invalid Choice -----------------
        } else if(option != 0) {
            cout << "Invalid selection! Please choose 1, 2, or 0." << endl;
        }

    } while(option != 0); // Repeat menu until user chooses 0

    cout << "Program terminated. Thank you!" << endl;
    return 0;
}
