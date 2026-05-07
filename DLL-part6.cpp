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

void deleteAtPos(int pos)
{
    node *temp = head;
    for (int i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "position not exist .";
        return;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    delete temp;
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
    deleteAtPos(2);
    display();
}