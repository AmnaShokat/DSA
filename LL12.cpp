#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
struct node *head = nullptr;
void insertAtBeg(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void insertAtPos(int value, int pos)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
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
    insertAtBeg(10);
    insertAtBeg(20);
    insertAtBeg(30);
    insertAtBeg(40);
    insertAtBeg(50);
    insertAtBeg(60);
    insertAtPos(55, 2);

    display();
}
