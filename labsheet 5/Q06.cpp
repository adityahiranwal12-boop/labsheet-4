// Lab Sheet-05: Check prime using early break
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool isPrime = number >= 2;
    for (int divisor = 2; divisor * divisor <= number && isPrime; ++divisor) {
        if (number % divisor == 0) {
            isPrime = false;
            break; // A divisor was found; no need to continue
        }
    }

    if (isPrime) cout << number << " is prime.\n";
    else cout << number << " is not prime.\n";
    return 0;
}
