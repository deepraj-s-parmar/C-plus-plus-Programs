#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Numbers: " << even << endl;
    cout << "Odd Numbers: " << odd;

    return 0;
}
