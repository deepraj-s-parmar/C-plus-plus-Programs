#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void input() {
        cin >> name >> rollNo >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
