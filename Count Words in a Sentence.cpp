#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    getline(cin, str);

    int words = 1;

    if (str.empty()) {
        cout << 0;
        return 0;
    }

    for (char ch : str) {
        if (ch == ' ')
            words++;
    }

    cout << "Total Words = " << words;

    return 0;
}
