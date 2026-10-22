// Lab Sheet-05: Fibonacci series using while loop
#include <iostream>
using namespace std;

int main() {
    int terms;
    cout << "How many Fibonacci terms? ";
    cin >> terms;
    if (terms < 0) {
        cout << "Number of terms cannot be negative.\n";
        return 0;
    }

    unsigned long long first = 0, second = 1;
    int counter = 0;
    while (counter < terms) {
        cout << first << " ";
        unsigned long long next = first + second;
        first = second;
        second = next;
        ++counter;
    }
    cout << '\n';
    return 0;
}
