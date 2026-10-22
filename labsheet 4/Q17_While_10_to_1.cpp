#include <iostream>
using namespace std;

int main() {
    // Print numbers from 10 down to 1 using a while loop.
    int number = 10;
    while (number >= 1) {
        cout << number << ' ';
        --number;
    }
    cout << '\n';

    return 0;
}
