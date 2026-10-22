#include <iostream>
using namespace std;

int main() {
    // Grade bands used here: A=90+, B=80-89, C=70-79,
    // D=60-69, E=40-59, F=below 40. Change if your teacher gave other bands.
    double marks;
    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Enter a value from 0 to 100.\n";
    } else if (marks >= 90) {
        cout << "Grade: A\n";
    } else if (marks >= 80) {
        cout << "Grade: B\n";
    } else if (marks >= 70) {
        cout << "Grade: C\n";
    } else if (marks >= 60) {
        cout << "Grade: D\n";
    } else if (marks >= 40) {
        cout << "Grade: E\n";
    } else {
        cout << "Grade: F\n";
    }

    return 0;
}
