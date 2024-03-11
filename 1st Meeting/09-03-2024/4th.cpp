//Take 3 positive integers input and print the greatest of them.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // enter three positive integers
    cout << "Enter three positive integers: ";
    cin >> num1 >> num2 >> num3;

    // first number is the greatest
    int greatest = num1;

    // Checking if the second number is greater than the current greatest
    if (num2 > greatest) {
        greatest = num2;
    }

    // Checking if the third number is greater than the current greatest
    if (num3 > greatest) {
        greatest = num3;
    }

    // Printing the greatest number
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
