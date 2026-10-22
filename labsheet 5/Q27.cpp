// Lab Sheet-05: GCD of two numbers using loops
#include <iostream>
using namespace std;

int main() {
    int first, second;
    cout << "Enter two non-negative integers: ";
    cin >> first >> second;
    if (first < 0 || second < 0 || (first == 0 && second == 0)) {
        cout << "Enter non-negative integers, not both zero.\n";
        return 0;
    }

    int gcd = 1;
    int limit = (first < second) ? first : second;
    for (int divisor = 1; divisor <= limit; ++divisor) {
        if (first % divisor == 0 && second % divisor == 0) gcd = divisor;
    }
    if (first == 0) gcd = second;
    if (second == 0) gcd = first;
    cout << "GCD = " << gcd << '\n';
    return 0;
}
