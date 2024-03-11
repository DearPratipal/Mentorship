//Take positive integer input and tell if it is divisible by 5 and 3.

#include <iostream>
using namespace std;

int main() {
    int num;

    // Asking user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // Checking if the number is divisible by both 5 and 3
    if (num % 5 == 0 && num % 3 == 0) {
        cout << "The number " << num << " is divisible by both 5 and 3." << endl;
    } else {
        cout << "The number " << num << " is not divisible by both 5 and 3." << endl;
    }

    return 0;
}
