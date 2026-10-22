// Lab Sheet-05: Reverse a number and check palindrome
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

    int original = number, reversed = 0, temp = number;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Reverse = " << reversed << '\n';
    if (original == reversed) cout << "It is a palindrome.\n";
    else cout << "It is not a palindrome.\n";
    return 0;
}
