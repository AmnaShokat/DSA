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
    node *temp = head;
    if (head != NULL)
    {
        newnode->next = head;
        head->prev = newnode;
    }
    head = newnode;
}
void deleteLast()
{
    node *temp = head;
    if (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
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
    insert(40);
    insert(30);
    insert(20);
    deleteLast();
    display();
}