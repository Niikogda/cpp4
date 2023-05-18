#include <iostream>

using namespace std;

int main() {
    int count = 0;

    for (int i = 100; i <= 999; i++) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds == tens || hundreds == units || tens == units) {
            count++;
            cout << i << endl;  // Additionally, output numbers with two identical digits
        }
    }

    cout << "Number of integers with two identical digits: " << count << endl;

    return 0;
}
