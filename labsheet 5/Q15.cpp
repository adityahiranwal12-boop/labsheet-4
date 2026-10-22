// Lab Sheet-05: Display Armstrong numbers between 1 and 500
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 500; ++number) {
        int temp = number, sum = 0, digits = 0, copy = number;
        do { ++digits; copy /= 10; } while (copy != 0);

        temp = number;
        do {
            int digit = temp % 10, power = 1;
            for (int i = 0; i < digits; ++i) power *= digit;
            sum += power;
            temp /= 10;
        } while (temp != 0);

        if (sum == number) cout << number << " ";
    }
    cout << '\n';
    return 0;
}
