#include <iostream>

using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    cout << "Integers divisible by both numbers without a remainder: ";
    for (int i = 1; i <= number1 && i <= number2; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
