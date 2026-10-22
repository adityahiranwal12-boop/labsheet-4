#include <iostream>
using namespace std;

int main() {
    // Display all prime numbers in the inclusive range.
    int startNumber, endNumber;
    cout << "Enter the starting and ending numbers: ";
    cin >> startNumber >> endNumber;

    if (startNumber > endNumber) {
        cout << "Starting number must not exceed ending number.\n";
        return 0;
    }

    cout << "Prime numbers: ";
    for (int number = (startNumber < 2 ? 2 : startNumber);
         number <= endNumber; ++number) {
        bool isPrime = true;

        for (int divisor = 2; divisor <= number / divisor; ++divisor) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << number << ' ';
    }
    cout << '\n';

    return 0;
}
