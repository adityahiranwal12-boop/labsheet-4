#include <iostream>
using namespace std;

int main() {
    // Check voting eligibility using age.
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
        cout << "Invalid age.\n";
    else if (age >= 18)
        cout << "You are eligible to vote.\n";
    else
        cout << "You are not eligible to vote yet.\n";

    return 0;
}
