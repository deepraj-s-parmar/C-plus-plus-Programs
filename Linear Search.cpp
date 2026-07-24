#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
