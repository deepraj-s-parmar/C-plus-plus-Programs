#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "After pop, front element: " << q.front() << endl;
    cout << "Queue size: " << q.size();

    return 0;
}
