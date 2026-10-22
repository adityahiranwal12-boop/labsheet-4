// Lab Sheet-05: Multiplication table stop when product exceeds 50
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    for (int multiplier = 1; ; ++multiplier) {
        int product = number * multiplier;
        if (product > 50) break;
        cout << number << " x " << multiplier << " = " << product << '\n';
    }
    return 0;
}
