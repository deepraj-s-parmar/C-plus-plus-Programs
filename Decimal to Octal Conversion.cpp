#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int octal = 0, place = 1;

    while (n > 0) {
        int rem = n % 8;
        octal += rem * place;
        place *= 10;
        n /= 8;
    }

    cout << "Octal = " << octal;

    return 0;
}
