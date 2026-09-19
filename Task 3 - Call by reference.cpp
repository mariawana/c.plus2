#include <iostream>
using namespace std;

void changeValue(int &x) {
    x += 12;
}

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int number = 9;
    cout << "Original number: " << number << endl;

    changeValue(number);
    cout << "Updated number: " << number << endl;

    cout << "--------------------------" << endl;

    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
