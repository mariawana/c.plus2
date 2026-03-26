#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 5;
    const int SUBJECTS = 4;

    int grades[STUDENTS][SUBJECTS];
    float averageStudent[STUDENTS];
    float averageSubject[SUBJECTS];

    int highest, lowest;

    // Ask the user to enter the grades of each student in every subject
    cout << "Enter grades for 5 students and 4 subjects:\n";
    for(int i = 0; i < STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        for(int j = 0; j < SUBJECTS; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    // Display the grades in a table format
    cout << "\nGrade Matrix:\n";
    cout << "Student\tSubject1\tSubject2\tSubject3\tSubject4\n";

    for(int i = 0; i < STUDENTS; i++) {
        cout << "Student" << i + 1 << "\t";
        for(int j = 0; j < SUBJECTS; j++) {
            cout << grades[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate the average grade of each student
    for(int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for(int j = 0; j < SUBJECTS; j++) {
            sum += grades[i][j];
        }
        averageStudent[i] = (float)sum / SUBJECTS;
    }

    // Calculate the average grade for each subject
    for(int j = 0; j < SUBJECTS; j++) {
        int sum = 0;
        for(int i = 0; i < STUDENTS; i++) {
            sum += grades[i][j];
        }
        averageSubject[j] = (float)sum / STUDENTS;
    }

    // Find the highest and lowest grade in the list
    highest = grades[0][0];
    lowest = grades[0][0];

    for(int i = 0; i < STUDENTS; i++) {
        for(int j = 0; j < SUBJECTS; j++) {
            if(grades[i][j] > highest) {
                highest = grades[i][j];
            }
            if(grades[i][j] < lowest) {
                lowest = grades[i][j];
            }
        }
    }

    // Show the average grade of each student
    cout << "\nAverage grade of each student:\n";
    for(int i = 0; i < STUDENTS; i++) {
        cout << "Student " << i + 1 << ": " << averageStudent[i] << endl;
    }

    // Show the average grade of each subject
    cout << "\nAverage grade of each subject:\n";
    for(int j = 0; j < SUBJECTS; j++) {
        cout << "Subject " << j + 1 << ": " << averageSubject[j] << endl;
    }

    // Display the highest and lowest grades
    cout << "\nHighest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}
