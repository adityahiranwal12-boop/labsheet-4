// Lab Sheet-05: Print all prime numbers between 1 and N
#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter N: ";
    cin >> limit;

    for (int number = 2; number <= limit; ++number) {
        bool isPrime = true;
        for (int divisor = 2; divisor * divisor <= number; ++divisor) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << number << " ";
    }
    cout << '\n';
    return 0;
}
