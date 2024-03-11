//Take positive integer input and tell if it is divisible by 5 or not

#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is divisible by 5
    if (num % 5 == 0) {
        cout << "The number is divisible by 5." << endl;
    } else {
        cout << "The number is not divisible by 5." << endl;
    }

    return 0;
}
