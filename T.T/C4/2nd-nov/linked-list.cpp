// insertion of an element in "array" is difficult, time complexity increases
//  Linked list - "single" | "double" | "circular"

#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Insert at Head -----------
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at Tail ------------
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display Linked List -----------
void display(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

// Delete a Node by Value
void deleteNode(Node *&head, int value)
{
    if (head == nullptr)
    {
        cout << "List is Empty !" << endl;
        return;
    }

    // If first Node contains the value
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;

        delete temp;
        return;
    }
}

// Count Nodes

int countNodes(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


int main(){
    Node* head= nullptr;

    insertAtTail(head, 10);
    insertAtTail(head, 10);
    insertAtTail(head, 10);

    cout<<"Original Linked List :";
    display(head);
    cout<<" :";
    display(head);
    cout<<"Original Linked List :";
    display(head); 

    deleteNode(head, 20);
    
}


// int main()
// {
//     Node *head1 = nullptr;
//     Node *head2 = nullptr;
//     int n, value;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter value: ";
//         cin >> value;

//         insertAtHead(head1, value);
//         insertAtTail(head2, value);
//     }

//     cout << "\nLinked List (Head) : ";
//     display(head1);
//     cout << "\nLinked List (Tail) : ";
//     display(head2);
//     int a = countNodes(head1);
//     cout << "\n No. of nodes : " << a;

//     return 0;
// }