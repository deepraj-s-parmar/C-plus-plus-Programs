#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
