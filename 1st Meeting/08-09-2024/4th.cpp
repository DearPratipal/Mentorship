//Given the radius of the circle predict whether numerically area of this

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius;

    // Prompt user for input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area and cir_pridhi
    float area = 3.14 * pow(radius, 2);
    float cir_pridhi = 2 * M_PI * radius;

    // Predict and display the result
    if (area > cir_pridhi) {
        cout << "The area of the circle is numerically larger than the cir_pridhi." << endl;
    } else {
        cout << "The cir_pridhi of the circle is numerically larger than or equal to the area." << endl;
    }

    return 0;
}
