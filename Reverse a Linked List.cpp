#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original List: ";
    display(head);

    head = reverseList(head);

    cout << "\nReversed List: ";
    display(head);

    return 0;
}
