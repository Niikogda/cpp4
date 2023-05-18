#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "Integers by which the number is divisible without a remainder: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
