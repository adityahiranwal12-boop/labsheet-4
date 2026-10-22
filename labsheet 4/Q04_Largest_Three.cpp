#include <iostream>
using namespace std;

int main() {
    // Find the largest of three numbers using nested if.
    int firstNumber, secondNumber, thirdNumber;
    cout << "Enter three numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber;

    if (firstNumber >= secondNumber) {
        if (firstNumber >= thirdNumber)
            cout << "Largest number: " << firstNumber << '\n';
        else
            cout << "Largest number: " << thirdNumber << '\n';
    } else {
        if (secondNumber >= thirdNumber)
            cout << "Largest number: " << secondNumber << '\n';
        else
            cout << "Largest number: " << thirdNumber << '\n';
    }

    return 0;
}
