#include <iostream>
using namespace std;

int main() {
    // A valid triangle has positive sides and the sum of any two exceeds the third.
    double sideA, sideB, sideC;
    cout << "Enter three side lengths: ";
    cin >> sideA >> sideB >> sideC;

    if (sideA > 0 && sideB > 0 && sideC > 0 &&
        sideA + sideB > sideC &&
        sideA + sideC > sideB &&
        sideB + sideC > sideA)
        cout << "The sides can form a valid triangle.\n";
    else
        cout << "The sides cannot form a valid triangle.\n";

    return 0;
}
