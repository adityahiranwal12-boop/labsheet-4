// Lab Sheet-05: Read numbers until -1, skip other negatives
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter numbers (-1 to stop):\n";
    while (true) {
        cin >> number;
        if (number == -1) break;
        if (number < 0) continue; // Ignore negative values other than -1
        cout << "Accepted: " << number << '\n';
    }
    return 0;
}
