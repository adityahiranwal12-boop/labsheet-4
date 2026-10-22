// Lab Sheet-05: Count positive numbers until 0 using break
#include <iostream>
using namespace std;

int main() {
    int number, positiveCount = 0;
    cout << "Enter numbers (0 to stop):\n";

    while (true) {
        cin >> number;
        if (number == 0) break;
        if (number > 0) ++positiveCount;
    }

    cout << "Positive numbers entered: " << positiveCount << '\n';
    return 0;
}
