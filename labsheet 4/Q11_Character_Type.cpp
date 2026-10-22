#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Classify a character as uppercase, lowercase, digit, or special.
    char character;
    cout << "Enter a character: ";
    cin >> character;

    unsigned char value = static_cast<unsigned char>(character);

    if (isupper(value))
        cout << "Uppercase letter\n";
    else if (islower(value))
        cout << "Lowercase letter\n";
    else if (isdigit(value))
        cout << "Digit\n";
    else
        cout << "Special character\n";

    return 0;
}
