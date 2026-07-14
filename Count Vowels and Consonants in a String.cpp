#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int vowels = 0, consonants = 0;

    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || 
                 (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;

    return 0;
}
