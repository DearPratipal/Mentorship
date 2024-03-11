//circle is larger than the circumference or not

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius;

    // Prompt user for input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area and cir_pridhi
    float area = M_PI * radius * radius;
    float cir_pridhi = 2 * M_PI * radius;

    // Compare area and cir_pridhi
    if (area > cir_pridhi) {
        cout << "The area of the circle is larger than the cir_pridhi." << endl;
    } else {
        cout << "The cir_pridhi of the circle is larger than or equal to the area." << endl;
    }
    return 0;
}
