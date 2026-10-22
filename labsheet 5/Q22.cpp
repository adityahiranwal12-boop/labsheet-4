// Lab Sheet-05: Check Harshad number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number <= 0) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    int temp = number, digitSum = 0;
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    if (number % digitSum == 0) cout << number << " is a Harshad number.\n";
    else cout << number << " is not a Harshad number.\n";
    return 0;
}
