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
    { // head->pre=newnode;
        newnode->next = head;
        head->prev = newnode;
    }
    head = newnode;
}
void insertAtend(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main()
{
    insert(40);
    insert(30);
    insert(20);
    insert(10);
    insert(00);
    insertAtend(90);
    display();
}