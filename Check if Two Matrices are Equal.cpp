#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int A[10][10], B[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    bool equal = true;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (A[i][j] != B[i][j]) {
                equal = false;
                break;
            }
        }
    }

    if (equal)
        cout << "Matrices are Equal";
    else
        cout << "Matrices are Not Equal";

    return 0;
}
