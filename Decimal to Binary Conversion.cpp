#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string binary = "";

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        binary += (n % 2) + '0';
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    cout << binary;

    return 0;
}
