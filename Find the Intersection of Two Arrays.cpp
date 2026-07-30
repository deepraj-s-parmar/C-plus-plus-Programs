#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    int b[100];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "Intersection: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
