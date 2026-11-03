#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at Head
void insertAtHead(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}     

// Insert at Tail
void insertAtTail(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display Linked List
void display(Node* head) {

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Delete a Node by value
void deleteNode(Node*& head, int value) {

    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    // If first node contains the value
    if (head->data == value) {

        Node* temp = head;
        head = head->next;

        delete temp;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != value) {

        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Value not found!" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;

    temp->next = nodeToDelete->next;

    delete nodeToDelete;
}

// Count Nodes
int countNodes(Node* head) {

    int count = 0;

    Node* temp = head;

    while (temp != nullptr) {

        count++;

        temp = temp->next;
    }

    return count;
}

// Main Function
int main() {

    Node* head = nullptr;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    cout << "Original Linked List: ";
    display(head);

    insertAtHead(head, 5);

    cout << "After Insert at Head: ";
    display(head);

    insertAtTail(head, 40);

    cout << "After Insert at Tail: ";
    display(head);

    deleteNode(head, 20);

    cout << "After Deletion: ";
    display(head);

    cout << "Total Nodes: "
         << countNodes(head) << endl;

    // Free remaining memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}