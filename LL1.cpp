#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = nullptr;
void InsertAtEnd(int value)
{
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    InsertAtEnd(40);
    InsertAtEnd(50);
    display();
}