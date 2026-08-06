#include <iostream>
using namespace std;

class MinHeap {

    int arr[100];
    int size;

public:

    MinHeap() {
        size = 0;
    }

    void insert(int value) {

        size++;
        int i = size;

        arr[i] = value;

        while (i > 1 && arr[i] < arr[i/2]) {

            swap(arr[i], arr[i/2]);
            i = i/2;
        }
    }

    void display() {

        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
    }
};

int main() {

    MinHeap h;

    h.insert(30);
    h.insert(10);
    h.insert(20);
    h.insert(5);

    cout << "Min Heap: ";
    h.display();

    return 0;
}
