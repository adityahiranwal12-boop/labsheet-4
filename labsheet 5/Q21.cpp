// Lab Sheet-05: Sum even and odd digits
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 0;
    }

    int evenSum = 0, oddSum = 0;
    do {
        int digit = number % 10;
        if (digit % 2 == 0) evenSum += digit;
        else oddSum += digit;
        number /= 10;
    } while (number != 0);

    cout << "Sum of even digits = " << evenSum << '\n';
    cout << "Sum of odd digits = " << oddSum << '\n';
    return 0;
}
