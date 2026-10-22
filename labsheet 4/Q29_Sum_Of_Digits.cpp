#include <iostream>
using namespace std;

int main() {
    // Calculate the sum of the digits of an integer.
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0)
        number = -number;

    int sum = 0;
    while (number > 0) {
        sum += static_cast<int>(number % 10);
        number /= 10;
    }

    cout << "Sum of digits: " << sum << '\n';
    return 0;
}
