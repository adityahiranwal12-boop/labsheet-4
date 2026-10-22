#include <iostream>
using namespace std;

int main() {
    // A palindrome number reads the same forwards and backwards.
    long long number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers are not treated as palindrome numbers here.\n";
        return 0;
    }

    long long originalNumber = number;
    long long reversedNumber = 0;

    while (number > 0) {
        int digit = static_cast<int>(number % 10);
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a palindrome number.\n";
    else
        cout << originalNumber << " is not a palindrome number.\n";

    return 0;
}
