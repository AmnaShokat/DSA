#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *head = NULL;
void insert(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = head;
    newnode->prev = NULL;

    if (head != NULL)
    {
        newnode->next = head;
        head->prev = newnode;
    }
    head = newnode;
}
void dlt()
{
    node *temp = head;
    while (temp != NULL)
    {
        node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
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
    insert(50);
    insert(60);
    dlt();
    display();
}