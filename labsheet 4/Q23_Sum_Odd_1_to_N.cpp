#include <iostream>
using namespace std;

int main() {
    // Find the sum of odd numbers between 1 and N.
    int n;
    long long sum = 0;
    cout << "Enter N (N >= 1): ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    for (int number = 1; number <= n; number += 2)
        sum += number;

    cout << "Sum of odd numbers: " << sum << '\n';
    return 0;
}
