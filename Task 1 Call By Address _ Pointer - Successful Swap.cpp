#include <iostream>
using namespace std;

int swapValues(int *x, int *y) { 
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main() {
    int num1 = 10, num2 = 20;
    swapValues(&num1, &num2); // send addresses
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl; // 20, 10
    return 0;
}
