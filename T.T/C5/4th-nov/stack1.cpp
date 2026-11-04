#include <iostream>
using namespace std;

#define SIZE 5

class Stack
{
    int arr[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Insert an Element

    void push(int value)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack OverFlow !" << endl;
            return;
        }

        top++;
        arr[top] = value;
        cout << value << " Inserted !" << endl;
    }

    // Remove an Element
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow !" << endl;
            return;
        }
        cout << arr[top] << " Removed !" << endl;
        top--;
    }

    // Show top Element
    void peek()
    {
        if (top != -1)
        {
            cout << "Top Element - " << arr[top] << endl;
        }
        else
        {
            cout << "Stack is Empty !" << endl;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == SIZE - 1;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    Stack s1;
    s1.push(35);
    s1.push(21);
    s1.push(53);
    s1.push(34);
    s1.push(22);

    s1.display();

    s1.peek();

    s1.pop();
    s1.peek();
    s1.display();
}