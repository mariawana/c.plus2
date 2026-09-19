#include <iostream>
using namespace std;

/*
    Task 1 – Problem 1
    Array: A collection of elements of the same type stored 
    consecutively in memory. Arrays allow storing multiple 
    values using a single variable name and accessing them 
    using an index.
*/

int main() {
    // ----------------- One-Dimensional Array -----------------
    int marks[5] = {88, 92, 76, 81, 95}; // 1D array storing marks
    cout << "--- One-Dimensional Array (Marks) ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i+1 << " mark: " << marks[i] << endl; // Display each mark
    }

    // ----------------- Two-Dimensional Array (Matrix) -----------------
    int matrix[2][3] = { {5, 10, 15}, {20, 25, 30} }; // 2x3 matrix
    cout << "\n--- Two-Dimensional Array (Matrix) ---" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t"; // Display each element
        }
        cout << endl; // Move to next row
    }

    return 0;
}
