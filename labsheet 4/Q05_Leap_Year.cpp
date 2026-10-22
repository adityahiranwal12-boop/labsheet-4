#include <iostream>
using namespace std;

int main() {
    // A leap year is divisible by 400, or divisible by 4 but not 100.
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a leap year.\n";
    else
        cout << year << " is not a leap year.\n";

    return 0;
}
