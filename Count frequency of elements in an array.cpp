#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (auto item : freq) {
        cout << item.first << " appears " 
             << item.second << " times\n";
    }

    return 0;
}
