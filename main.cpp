#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "enter a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "mistake. a should be from 1 to 20." << endl;
        return 0;
    }

    int product = 1;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }

    cout << "prod from" << a << " to 20: " << product << endl;

    return 0;
}
