#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int arr[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << "Transpose Matrix:\n";

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }

    return 0;
}
