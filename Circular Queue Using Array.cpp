#include <iostream>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int value) {
        if ((rear + 1) % 5 == front) {
            cout << "Queue Full\n";
            return;
        }

        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % 5;

        arr[rear] = value;
    }

    void display() {
        if (front == -1) {
            cout << "Queue Empty";
            return;
        }

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % 5;
        }
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue: ";
    q.display();

    return 0;
}
