#include <iostream>
using namespace std;

int main() {
    // A prime number is greater than 1 and has no divisors other than 1 and itself.
    int number;
    bool isPrime = true;

    cout << "Enter an integer: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int divisor = 2; divisor <= number / divisor; ++divisor) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << number << " is prime.\n";
    else
        cout << number << " is not prime.\n";

    return 0;
}
