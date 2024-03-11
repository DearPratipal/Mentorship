//Q4. Calculating Simple Interest

#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    // Input principal amount, rate of interest, and time period
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the calculated interest
    cout << "Simple interest: " << interest << endl;

    return 0;
}
