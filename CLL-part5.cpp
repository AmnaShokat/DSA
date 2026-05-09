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

    // Empty list
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void dltFirst()
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    node *del = head;

    temp->next = head->next;
    head = head->next;

    delete del;
}

void display()
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }

    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while (temp != head);
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    dltFirst();
    display();
}