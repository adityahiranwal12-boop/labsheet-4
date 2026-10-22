#include <iostream>
using namespace std;

int main() {
    // Perform a basic arithmetic operation using switch.
    double firstNumber, secondNumber;
    char operation;

    cout << "Enter an expression (example: 8 * 2): ";
    cin >> firstNumber >> operation >> secondNumber;

    switch (operation) {
        case '+': cout << "Result: " << firstNumber + secondNumber << '\n'; break;
        case '-': cout << "Result: " << firstNumber - secondNumber << '\n'; break;
        case '*': cout << "Result: " << firstNumber * secondNumber << '\n'; break;
        case '/':
            if (secondNumber == 0)
                cout << "Error: division by zero is not allowed.\n";
            else
                cout << "Result: " << firstNumber / secondNumber << '\n';
            break;
        default: cout << "Invalid operator.\n";
    }

    return 0;
}
