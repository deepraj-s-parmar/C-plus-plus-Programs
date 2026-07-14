#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
