// Lab Sheet-05: Display strong numbers between 1 and 500
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 500; ++number) {
        int temp = number, sum = 0;
        do {
            int digit = temp % 10, factorial = 1;
            for (int i = 2; i <= digit; ++i) factorial *= i;
            sum += factorial;
            temp /= 10;
        } while (temp != 0);

        if (sum == number) cout << number << " ";
    }
    cout << '\n';
    return 0;
}
