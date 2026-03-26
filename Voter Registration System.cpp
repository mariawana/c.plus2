#include <iostream>
#include <vector>
using namespace std;

// Structure to store information of a voter
struct Voter {
    int id;
    string name;
    int age;
};

int main() {

    vector<Voter> voters; // List of registered voters
    int choice;           // Menu choice selected by user

    do {
        // Display menu options
        cout << "\n===== VOTER REGISTRATION SYSTEM =====\n";
        cout << "1. Register Voter\n";
        cout << "2. Display All Registered Voters\n";
        cout << "3. Count Total Voters\n";
        cout << "4. Count Senior Citizen Voters\n";
        cout << "5. Delete Voter by ID\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            // Register a new voter
            Voter v;

            cout << "Enter Voter ID: ";
            cin >> v.id;

            cout << "Enter Name: ";
            cin.ignore(); // To clear the input buffer
            getline(cin, v.name);

            cout << "Enter Age: ";
            cin >> v.age;

            // Check if voter is eligible
            if(v.age < 18){
                cout << "Only voters 18 years old and above are allowed.\n";
            } else {
                voters.push_back(v); // Add voter to the list
                cout << "Voter registered successfully!\n";
            }
        }

        else if(choice == 2){
            // Display all registered voters
            if(voters.empty()){
                cout << "No voters registered.\n";
            } else {
                cout << "\n--- Registered Voters ---\n";
                for(int i = 0; i < voters.size(); i++){
                    cout << "ID: " << voters[i].id << endl;
                    cout << "Name: " << voters[i].name << endl;
                    cout << "Age: " << voters[i].age << endl;
                    cout << "--------------------------\n";
                }
            }
        }

        else if(choice == 3){
            // Show total number of voters
            cout << "Total voters: " << voters.size() << endl;
        }

        else if(choice == 4){
            // Count voters who are senior citizens (age 60+)
            int senior = 0;
            for(int i = 0; i < voters.size(); i++){
                if(voters[i].age >= 60){
                    senior++;
                }
            }
            cout << "Senior citizen voters: " << senior << endl;
        }

        else if(choice == 5){
            // Delete a voter by ID
            int deleteID;
            bool found = false;

            cout << "Enter ID to delete: ";
            cin >> deleteID;

            for(int i = 0; i < voters.size(); i++){
                if(voters[i].id == deleteID){
                    voters.erase(voters.begin() + i); // Remove voter from the list
                    cout << "Voter deleted successfully.\n";
                    found = true;
                    break;
                }
            }

            if(!found){
                cout << "Voter ID not found.\n";
            }
        }

        else if(choice != 6){
            // Handle invalid menu choices
            cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 6); // Keep looping until user chooses to exit

    cout << "Program exited.\n";

    return 0;
}
