// Lab Sheet-05: Search for a number in a sequence using break
#include <iostream>
using namespace std;

int main() {
    int count, target;
    cout << "Enter number of elements: ";
    cin >> count;
    cout << "Enter the number to search for: ";
    cin >> target;

    bool found = false;
    cout << "Enter the elements: ";
    for (int i = 0; i < count; ++i) {
        int value;
        cin >> value;
        if (value == target) {
            found = true;
            break; // Stop searching once the target is found
        }
    }

    if (found) cout << "Number found.\n";
    else cout << "Number not found.\n";
    return 0;
}
