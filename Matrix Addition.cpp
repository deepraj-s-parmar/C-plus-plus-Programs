#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int A[10][10], B[10][10], C[10][10];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Result Matrix:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
