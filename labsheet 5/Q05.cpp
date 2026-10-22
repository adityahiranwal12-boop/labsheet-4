// Lab Sheet-05: Menu-driven calculator using switch default
#include <iostream>
using namespace std;

int main() {
    double first, second;
    char operation;
    cout << "Enter an expression (e.g. 8 + 2): ";
    cin >> first >> operation >> second;

    switch (operation) {
        case '+': cout << "Result = " << first + second << '\n'; break;
        case '-': cout << "Result = " << first - second << '\n'; break;
        case '*': cout << "Result = " << first * second << '\n'; break;
        case '/':
            if (second == 0) cout << "Cannot divide by zero.\n";
            else cout << "Result = " << first / second << '\n';
            break;
        default: cout << "Invalid operator.\n";
    }
    return 0;
}
