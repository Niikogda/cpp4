#include <iostream>

using namespace std;

int main() {
    int k;
    cout << "Enter the variant number: ";
    cin >> k;

    cout << "Multiplication table for " << k << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        int result = k * i;
        cout << k << " x " << i << " = " << result << endl;
    }

    return 0;
}
