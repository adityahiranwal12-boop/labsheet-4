// Lab Sheet-05: Check strong number
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

    int original = number, temp = number, sum = 0;
    do {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 2; i <= digit; ++i) factorial *= i;
        sum += factorial;
        temp /= 10;
    } while (temp != 0);

    if (sum == original) cout << original << " is a strong number.\n";
    else cout << original << " is not a strong number.\n";
    return 0;
}
