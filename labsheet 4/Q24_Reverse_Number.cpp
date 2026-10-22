#include <iostream>
using namespace std;

int main() {
    // Reverse the digits of an integer.
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    long long remaining = (number < 0) ? -number : number;
    long long reversedNumber = 0;

    while (remaining > 0) {
        int digit = static_cast<int>(remaining % 10);
        reversedNumber = reversedNumber * 10 + digit;
        remaining /= 10;
    }

    if (number < 0)
        reversedNumber = -reversedNumber;

    cout << "Reversed number: " << reversedNumber << '\n';
    return 0;
}
