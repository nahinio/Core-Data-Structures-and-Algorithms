#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Given the head of a list and an int, appends
// a new node at the end and returns the head.
void insertAtEnd(Node*& head, int x) {
    Node* newNode = new Node(x);
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void insertPosition(Node*& head, int x, int pos) {
    Node* newNode = new Node(x);
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    for (int i = 0; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;

}
// This function prints the contents 
// of the linked list starting from the head
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data;
        if (node->next != nullptr) {
            cout << " -> ";
        }
        node = node->next;
    }
    cout << endl;
}

int main() {
  
    // Create a linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = insertAtEnd(head, 6);

    printList(head);

    return 0;
}