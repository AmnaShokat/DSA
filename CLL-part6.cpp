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
    newnode->next = head;
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

void dltAtPos(int pos)
{
    node *temp = head;
    int i = 1;
    while (temp->next != head && i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }
    node *dlt = temp->next;
    temp->next = dlt->next;
    delete temp->next;
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
    insert(50);
    dltAtPos(3);
    display();
}