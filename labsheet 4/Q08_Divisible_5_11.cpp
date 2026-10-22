#include <iostream>
using namespace std;

int main() {
    // Check divisibility by both 5 and 11.
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 5 == 0 && number % 11 == 0)
        cout << number << " is divisible by both 5 and 11.\n";
    else
        cout << number << " is not divisible by both 5 and 11.\n";

    return 0;
}
