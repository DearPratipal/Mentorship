//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter

#include <iostream>
using namespace std;

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    } else if (area < perimeter) {
        cout << "The perimeter of the rectangle is greater than its area." << endl;
    } else {
        cout << "The area and perimeter of the rectangle are equal." << endl;
    }

    return 0;
}
