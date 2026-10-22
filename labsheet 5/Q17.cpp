// Lab Sheet-05: Display perfect numbers between 1 and 1000
#include <iostream>
using namespace std;

int main() {
    for (int number = 2; number <= 1000; ++number) {
        int sum = 0;
        for (int divisor = 1; divisor <= number / 2; ++divisor) {
            if (number % divisor == 0) sum += divisor;
        }
        if (sum == number) cout << number << " ";
    }
    cout << '\n';
    return 0;
}
