#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Front element: " << q.front() << endl;

    q.pop();

    cout << "After removing first element: " << q.front();

    return 0;
}
