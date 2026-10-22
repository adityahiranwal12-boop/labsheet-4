#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Check whether an alphabet character is a vowel or consonant.
    char character;
    cout << "Enter an alphabet character: ";
    cin >> character;

    character = static_cast<char>(tolower(static_cast<unsigned char>(character)));

    if (character < 'a' || character > 'z')
        cout << "Input is not an alphabet character.\n";
    else if (character == 'a' || character == 'e' || character == 'i' ||
             character == 'o' || character == 'u')
        cout << "The character is a vowel.\n";
    else
        cout << "The character is a consonant.\n";

    return 0;
}
