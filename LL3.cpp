#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = nullptr;

void insert(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertAtPos(int value, int pos)
{
    node *newnode = new node();
    newnode->data = value;
    if (head == nullptr)
    {
        insert(value);
        return;
    }

    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void insertAfter(int value, int pos)
{
    node *newnode = new node();
    newnode->data = value;
    if (head == nullptr)
    {
        insert(value);
        return;
    }

    node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display()
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insertAtPos(00, 3);
    // insertAfter(111, 3);
    display();
}