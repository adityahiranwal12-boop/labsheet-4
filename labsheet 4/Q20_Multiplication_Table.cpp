#include <iostream>
using namespace std;

int main() {
    // Print the multiplication table of a given number.
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int multiplier = 1; multiplier <= 10; ++multiplier)
        cout << number << " x " << multiplier << " = "
             << number * multiplier << '\n';

    return 0;
}
