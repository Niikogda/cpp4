#include <iostream>

using namespace std;

int main() {
    int A;
    cout << "Enter an integer A: ";
    cin >> A;

    cout << "Integers B satisfying the conditions: ";
    for (int B = 1; B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }

    cout << endl;

    return 0;
}
