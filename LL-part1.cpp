#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertAtEnd(int n)
{
    node *newnode = new node;
    newnode->data = n;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}

void display()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    display();
}
