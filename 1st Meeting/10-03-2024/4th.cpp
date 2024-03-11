//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <iostream>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

    // If the slope of the line between any two pairs of points is the same,
    // then the points are collinear.
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        cout << "The three points are collinear." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }

    return 0;
}
