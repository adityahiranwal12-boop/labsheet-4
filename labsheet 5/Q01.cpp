// Lab Sheet-05: Print 1 to 10, skip 5 using continue
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; ++number) {
        if (number == 5) {
            continue; // Skip 5
        }
        cout << number << " ";
    }
    cout << '\n';
    return 0;
}
