#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    int freq[26] = {0};

    for (char ch : s1)
        freq[ch - 'a']++;

    for (char ch : s2)
        freq[ch - 'a']--;

    bool isAnagram = true;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
