//Take positive integer input and tell if it is a three digit number or not. 

#include <iostream>
using namespace std;

int main() {
    int num;

    // Asking user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // Checking if the number is a three-digit number
    if (num >= 100 && num <= 999) {
        cout << "The number " << num << " is a three-digit number." << endl;
    } else {
        cout << "The number " << num << " is not a three-digit number." << endl;
    }

    return 0;
}
