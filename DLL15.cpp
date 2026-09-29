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
void reverse()
{
    node *temp = head;
    node *newhead = nullptr;
    while (temp != nullptr)
    {
        //  temp = temp->next;
        node *nextnode = temp->next;
        temp->next = temp->prev;
        temp->prev = nextnode;
        newhead = temp;
        temp = nextnode;
    }
    head = newhead;
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

    reverse();
    display();
}
