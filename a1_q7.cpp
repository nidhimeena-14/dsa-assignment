#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The multiplicative inverse is undefined (division by zero)." << endl;
    } else {
        double inverse = 1.0 / num;
        cout << "The multiplicative inverse is: " << inverse << endl;
    }

    return 0;
}
