#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[256] = {0};

    for (char ch : str)
        freq[ch]++;

    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First Non-Repeating Character: " << ch;
            return 0;
        }
    }

    cout << "No Non-Repeating Character Found";

    return 0;
}
