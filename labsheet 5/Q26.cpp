// Lab Sheet-05: LCM of two numbers using loops
#include <iostream>
using namespace std;

int main() {
    long long first, second;
    cout << "Enter two positive integers: ";
    cin >> first >> second;
    if (first <= 0 || second <= 0) {
        cout << "Please enter positive integers.\n";
        return 0;
    }

    long long candidate = (first > second) ? first : second;
    while (candidate % first != 0 || candidate % second != 0) {
        ++candidate;
    }
    cout << "LCM = " << candidate << '\n';
    return 0;
}
