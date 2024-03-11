//Take positive integer input and tell if it is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
