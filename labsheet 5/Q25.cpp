// Lab Sheet-05: Print prime factors of a number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer greater than 1: ";
    cin >> number;
    if (number <= 1) {
        cout << "Please enter a number greater than 1.\n";
        return 0;
    }

    cout << "Prime factors: ";
    for (int factor = 2; factor <= number / factor; ++factor) {
        while (number % factor == 0) {
            cout << factor << " ";
            number /= factor;
        }
    }
    if (number > 1) cout << number;
    cout << '\n';
    return 0;
}
