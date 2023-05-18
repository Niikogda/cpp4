#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << " x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " in " << y << " = " << result << endl;

    return 0;
}
