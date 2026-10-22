#include <iostream>
using namespace std;

int main() {
    // Calculate factorial using a for loop.
    int number;
    unsigned long long factorial = 1;

    cout << "Enter a non-negative integer (0-20): ";
    cin >> number;

    if (number < 0 || number > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    for (int value = 1; value <= number; ++value)
        factorial *= static_cast<unsigned long long>(value);

    cout << number << "! = " << factorial << '\n';
    return 0;
}
