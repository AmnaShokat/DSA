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
void dltF()
{

    node *temp = head;
    head = temp->next;
    delete temp;
}
void dltL()
{
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    node *dlt = temp->next->next;
    temp->next = nullptr;
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
    dltL();

    display();
}
