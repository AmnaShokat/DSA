#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *head = NULL;
void insert(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = head;
    head = newnode;
}

void insertAfter(int n, int val)
{
    node *newnode = new node;
    newnode->data = n;
    node *temp = head;
    while (temp != NULL && temp->data != val)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insertAfter(000, 0);
    display();
}