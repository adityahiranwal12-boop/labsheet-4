// Lab Sheet-05: Check Armstrong number
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

    int original = number, digits = 0, temp = number;
    do { ++digits; temp /= 10; } while (temp != 0);

    int sum = 0;
    temp = number;
    do {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; ++i) power *= digit;
        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == original) cout << original << " is an Armstrong number.\n";
    else cout << original << " is not an Armstrong number.\n";
    return 0;
}
