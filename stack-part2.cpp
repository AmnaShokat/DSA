#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top = NULL;
bool isempty()
{
    return top == NULL;
}
void push(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    if (isempty())
    {
        cout << "stack is empty";
        return;
    }
    node *temp = top;
    top = top->next;
    delete top;
}

void peek()
{
    if (isempty())
    {
        cout << "stack is empty";
        return;
    }
    node *temp = top;
    cout << temp->data << endl;
}

void complete()
{
    while (top != NULL)
    {
        node *temp = top;
        top = top->next;
        delete temp;
    }
    cout << "complete stack deleted";
}
void display()
{
    if (isempty())
    {
        cout << "stack is empty";
        return;
    }
    node *temp = top;
    while (top != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    peek();
    display();
    complete();
    display();
}