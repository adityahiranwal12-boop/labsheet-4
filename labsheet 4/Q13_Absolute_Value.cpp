#include <iostream>
using namespace std;

int main() {
    // Find the absolute value of a number.
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;

    cout << "Absolute value: " << number << '\n';
    return 0;
}
