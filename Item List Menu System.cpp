#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> items;
    int choice;
    string name;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Delete Last Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter item name: ";
                cin >> name;
                items.push_back(name);
                cout << "Item added!\n";
                break;

            case 2:
                cout << "\nItems List:\n";
                if(items.empty()) {
                    cout << "No items found.\n";
                } else {
                    for(int i = 0; i < items.size(); i++) {
                        cout << i + 1 << ". " << items[i] << endl;
                    }
                }
                break;

            case 3:
                if(items.empty()) {
                    cout << "Nothing to delete.\n";
                } else {
                    items.pop_back();
                    cout << "Last item removed!\n";
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
