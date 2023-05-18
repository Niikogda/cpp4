#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "enter num: ";
    cin >> number;

    int result = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;

        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }

        number /= 10;
    }

    cout << "result: " << result << endl;

    return 0;
}
