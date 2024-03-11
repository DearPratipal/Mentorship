//Q.5 Write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;

int main() {
    char word;

    // Asking the user to enter a character
    cout << "Enter a character: ";
    cin >> word;

    // Checking if the character is an alphabet
    if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')) {
        cout << "The character '" << word << "' is an alphabet." << endl;
    } else {
        cout << "The character '" << word << "' is not an alphabet." << endl;
    }

    return 0;
}
