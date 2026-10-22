#include <iostream>
using namespace std;

int main() {
    // Find the sum of the first N natural numbers.
    int n;
    long long sum = 0;
    cout << "Enter N (N >= 0): ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 0;
    }

    for (int number = 1; number <= n; ++number)
        sum += number;

    cout << "Sum: " << sum << '\n';
    return 0;
}
