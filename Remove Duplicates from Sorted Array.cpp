#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= index; i++)
        cout << arr[i] << " ";

    return 0;
}
