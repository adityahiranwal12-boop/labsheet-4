// Lab Sheet-05: Sum series 1 + 2 + ... + N
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
    for (int number = 1; number <= n; ++number) sum += number;
    cout << "Sum = " << sum << '\n';
    return 0;
}
