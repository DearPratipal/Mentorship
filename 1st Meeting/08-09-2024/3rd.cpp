//Given an integer Print the absolute value of that integer

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Calculate and print the absolute value
    int absoluteValue = abs(num);
    cout << "The absolute value of " << num << " is " << absoluteValue << endl;

    return 0;
}
