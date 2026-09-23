#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = nullptr;
void insertAtStart(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void dltend()
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
    insertAtStart(5);
    insertAtStart(10);
    insertAtStart(20);
    insertAtStart(30);
    insertAtStart(40);
    insertAtStart(50);
    dltend();
    display();
}