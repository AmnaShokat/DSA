#include <iostream>
using namespace std;

const int SIZE = 5;
int stackArr[SIZE];
int top = -1;

// Check if stack is full
bool isFull()
{
    return top == SIZE - 1;
}

// Check if stack is empty
bool isEmpty()
{
    return top == -1;
}

// Push operation
void push(int value)
{
    if (isFull())
    {
        cout << "Stack Overflow! Cannot insert " << value << endl;
        return;
    }

    top++;
    stackArr[top] = value;
    cout << value << " pushed into stack." << endl;
}

// Pop operation
void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow! Stack is empty." << endl;
        return;
    }

    cout << stackArr[top] << " popped from stack." << endl;
    top--;
}

// Peek operation
void peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Top element: " << stackArr[top] << endl;
}

// Display stack
void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--)
    {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();
}