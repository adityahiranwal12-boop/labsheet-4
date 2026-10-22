#include <iostream>
using namespace std;

int main() {
    // Print the first N terms of the Fibonacci series.
    int terms;
    long long first = 0, second = 1;

    cout << "Enter number of terms (0-90): ";
    cin >> terms;

    if (terms < 0 || terms > 90) {
        cout << "Please enter a number from 0 to 90.\n";
        return 0;
    }

    for (int index = 0; index < terms; ++index) {
        cout << first << ' ';
        long long next = first + second;
        first = second;
        second = next;
    }
    cout << '\n';

    return 0;
}
