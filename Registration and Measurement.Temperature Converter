#include <iostream>
#include <conio.h> // Needed for getch() to hide password input
using namespace std;

int main() {
    // ==================== USER REGISTRATION ====================
    string firstName, lastName, address;
    string username, password;

    cout << "===== USER REGISTRATION =====\n";

    cout << "First Name: ";
    cin >> firstName;

    cout << "Last Name: ";
    cin >> lastName;

    cout << "Address: ";
    cin >> address;

    cout << "Create Username: ";
    cin >> username;

    // Password input with asterisks
    cout << "Create Password (exactly 5 characters): ";
    password = "";
    char character;
    while (true) {
        character = _getch(); // Read character without displaying it
        if (character == 13) break; // Enter key ends input
        if (character == 8 && !password.empty()) { // Backspace handling
            password.pop_back();
            cout << "\b \b"; // Remove asterisk
        } else if (password.length() < 5 && character != 8) {
            password.push_back(character);
            cout << "*"; // Show asterisk
        }
    }

    cout << "\nRegistration Complete!\n";
    cout << "-----------------------------------\n";
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Address: " << address << endl;
    cout << "Username: " << username << endl;
    cout << "Password: ***** (hidden)\n";
    cout << "-----------------------------------\n\n";

    // ==================== LOGIN PROCESS ====================
    string enteredUsername, enteredPassword;
    int loginAttempts = 0;

    cout << "========== LOGIN ==========\n";

    while (loginAttempts < 3) {
        cout << "Username: ";
        cin >> enteredUsername;

        cout << "Password: ";
        enteredPassword = "";
        while (true) {
            character = _getch();
            if (character == 13) break;
            if (character == 8 && !enteredPassword.empty()) {
                enteredPassword.pop_back();
                cout << "\b \b";
            } else if (enteredPassword.length() < 5 && character != 8) {
                enteredPassword.push_back(character);
                cout << "*";
            }
        }
        cout << endl;

        if (enteredPassword.length() != 5) {
            cout << "Error: Password must be exactly 5 characters. This attempt is not counted.\n";
            continue;
        }

        loginAttempts++;

        if (enteredUsername == username && enteredPassword == password) {
            cout << "\nLogin Successful! Welcome, " << firstName << "!\n\n";
            break;
        } else {
            cout << "Incorrect username or password. Attempts left: " << 3 - loginAttempts << endl;
        }
    }

    if (loginAttempts == 3) {
        cout << "\nAccess Denied. Please try again later.\n";
        return 0;
    }

    // ==================== MAIN MENU ====================
    int choice;
    do {
        cout << "========== MAIN MENU ==========\n";
        cout << "1. Temperature Conversion\n";
        cout << "2. Measurement Conversion\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            // Temperature Conversion
            int temperatureChoice;
            double celsius, fahrenheit, kelvin;

            cout << "\n--- Temperature Conversion ---\n";
            cout << "1. Celsius to Fahrenheit and Kelvin\n";
            cout << "2. Fahrenheit to Celsius and Kelvin\n";
            cout << "3. Kelvin to Celsius and Fahrenheit\n";
            cout << "Choose an option: ";
            cin >> temperatureChoice;

            if (temperatureChoice == 1) {
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                fahrenheit = celsius * 9/5 + 32;
                kelvin = celsius + 273.15;
                cout << "Fahrenheit: " << fahrenheit << endl;
                cout << "Kelvin: " << kelvin << endl;
            } else if (temperatureChoice == 2) {
                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;
                celsius = (fahrenheit - 32) * 5/9;
                kelvin = celsius + 273.15;
                cout << "Celsius: " << celsius << endl;
                cout << "Kelvin: " << kelvin << endl;
            } else if (temperatureChoice == 3) {
                cout << "Enter temperature in Kelvin: ";
                cin >> kelvin;
                celsius = kelvin - 273.15;
                fahrenheit = (kelvin - 273.15) * 9/5 + 32;
                cout << "Celsius: " << celsius << endl;
                cout << "Fahrenheit: " << fahrenheit << endl;
            } else {
                cout << "Invalid option selected.\n";
            }
            cout << endl;
        }

        else if (choice == 2) {
            // Measurement Conversion
            int measurementChoice;
            double inputValue, meters, kilometers, inches, feet;

            cout << "\n--- Measurement Conversion ---\n";
            cout << "1. Meters to Kilometers, Inches, Feet\n";
            cout << "2. Kilometers to Meters, Inches, Feet\n";
            cout << "3. Inches to Meters, Kilometers, Feet\n";
            cout << "4. Feet to Meters, Kilometers, Inches\n";
            cout << "Choose an option: ";
            cin >> measurementChoice;

            if (measurementChoice == 1) {
                cout << "Enter value in meters: ";
                cin >> inputValue;
                kilometers = inputValue * 0.001;
                inches = inputValue * 39.3701;
                feet = inputValue * 3.28084;
                cout << "Kilometers: " << kilometers << endl;
                cout << "Inches: " << inches << endl;
                cout << "Feet: " << feet << endl;
            } else if (measurementChoice == 2) {
                cout << "Enter value in kilometers: ";
                cin >> inputValue;
                meters = inputValue * 1000;
                inches = meters * 39.3701;
                feet = meters * 3.28084;
                cout << "Meters: " << meters << endl;
                cout << "Inches: " << inches << endl;
                cout << "Feet: " << feet << endl;
            } else if (measurementChoice == 3) {
                cout << "Enter value in inches: ";
                cin >> inputValue;
                meters = inputValue * 0.0254;
                kilometers = meters * 0.001;
                feet = inputValue * 0.0833333;
                cout << "Meters: " << meters << endl;
                cout << "Kilometers: " << kilometers << endl;
                cout << "Feet: " << feet << endl;
            } else if (measurementChoice == 4) {
                cout << "Enter value in feet: ";
                cin >> inputValue;
                meters = inputValue * 0.3048;
                kilometers = meters * 0.001;
                inches = inputValue * 12;
                cout << "Meters: " << meters << endl;
                cout << "Kilometers: " << kilometers << endl;
                cout << "Inches: " << inches << endl;
            } else {
                cout << "Invalid option selected.\n";
            }
            cout << endl;
        }

    } while (choice != 3);

    cout << "\nThank you for using the system, " << firstName << "! Have a great day!\n";

    return 0;
}
