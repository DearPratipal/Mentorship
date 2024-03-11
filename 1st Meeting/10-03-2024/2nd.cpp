//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is an equilateral triangle." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is an isosceles triangle." << endl;
    } else {
        cout << "The triangle is a scalene triangle." << endl;
    }

    return 0;
}
