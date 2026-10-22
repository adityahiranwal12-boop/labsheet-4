// Lab Sheet-05: Factorial using while loop
#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1;
    cout << "Enter a number from 0 to 20: ";
    cin >> number;

    if (number < 0 || number > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    int counter = 1;
    while (counter <= number) {
        factorial *= counter;
        ++counter;
    }
    cout << number << "! = " << factorial << '\n';
    return 0;
}
