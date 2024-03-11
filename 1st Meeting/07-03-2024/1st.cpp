// Q1. Calculating percentage of 5 subjects


#include <iostream>
#include <string>
using namespace std;

int main() {

    int totalMarks = 500; // total marks for all subjects is 500
    int marks[5]; // marks obtained in each subject
    string subjects[5] = {"BCA-201", "BCA-202", "BCA-203", "BCA-204", "BCA-205"};

    cout << "Enter marks obtained in each subject:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Marks obtained in " << subjects[i] << ": ";
        cin >> marks[i];
    }

    int totalObtained = 0;
    for(int i = 0; i < 5; i++) {
        totalObtained += marks[i];
    }

    float percentage = (static_cast<float>(totalObtained) / totalMarks) * 100;

    cout << "Percentage obtained: " << percentage << "%" << endl;

    return 0;
}
