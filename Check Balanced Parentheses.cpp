#include <iostream>
#include <stack>
using namespace std;

int main() {

    string str;
    cin >> str;

    stack<char> s;

    for (char ch : str) {

        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);

        else {
            if (s.empty()) {
                cout << "Not Balanced";
                return 0;
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {

                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if (s.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
