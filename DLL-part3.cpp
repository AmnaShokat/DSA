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
    newnode->prev = head;
    newnode->next = NULL;
    if (head != NULL)
    {
        newnode->next = head;
        head->prev = newnode;
    }
    head = newnode;
}
void insertAtEnd(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->prev = NULL;
    newnode->next = NULL;
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
void insertAtPos(int n, int pos)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->prev = head;
    newnode->next = NULL;
    if (pos == 1)
    {
        newnode->next = head;
        if (head != NULL)
        {
            head->prev = newnode;
        }
        head = newnode;
        return;
    }
    node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "position does not exist ." << endl;
            return;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL)
            temp->next->prev = newnode;
    }
    temp->next = newnode;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
int main()
{
    insert(40);
    insert(30);
    insert(20);
    insertAtEnd(50);
    insertAtPos(60, 9);
    display();
}