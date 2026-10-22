// Lab Sheet-05: Check perfect number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int sum = 0;
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if (number > 0 && number % divisor == 0) sum += divisor;
    }

    if (number > 1 && sum == number) cout << number << " is a perfect number.\n";
    else cout << number << " is not a perfect number.\n";
    return 0;
}
