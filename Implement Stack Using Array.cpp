#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:

    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == 99)
            cout << "Stack Overflow";
        else
            arr[++top] = value;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow";
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack Elements: ";
    s.display();

    s.pop();

    cout << "\nAfter Pop: ";
    s.display();

    return 0;
}
