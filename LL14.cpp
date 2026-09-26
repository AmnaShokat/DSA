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
void dltPos(int pos)
{

    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    node *dlt = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete dlt;
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
    dltPos(4);

    display();
}
