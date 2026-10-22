#include <iostream>
using namespace std;

int main() {
    // Find the largest of two numbers using if.
    int firstNumber, secondNumber;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
        cout << "Largest number: " << firstNumber << '\n';
    else if (secondNumber > firstNumber)
        cout << "Largest number: " << secondNumber << '\n';
    else
        cout << "Both numbers are equal.\n";

    return 0;
}
