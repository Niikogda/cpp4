#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A;
    cout << "Enter an integer A: ";
    cin >> A;

    int sumOfDigits = 0;
    int temp = abs(A);

    while (temp != 0) {
        int digit = temp % 10;
        sumOfDigits += digit;
        temp /= 10;
    }

    int cubeOfSum = pow(sumOfDigits, 3);

    if (cubeOfSum == A * A) {
        cout << "The cube of the sum of the digits is equal to A*A." << endl;
    }
    else {
        cout << "The cube of the sum of the digits is not equal to A*A." << endl;
    }

    return 0;
}
