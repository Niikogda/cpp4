#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    cout << "average from 1 to 1000: " << average << endl;

    return 0;
}
