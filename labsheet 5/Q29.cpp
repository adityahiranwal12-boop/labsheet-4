// Lab Sheet-05: Sum series of squares
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n < 0) {
        cout << "N cannot be negative.\n";
        return 0;
    }

    long long sum = 0;
    for (long long number = 1; number <= n; ++number) {
        sum += number * number;
    }
    cout << "Sum of squares = " << sum << '\n';
    return 0;
}
