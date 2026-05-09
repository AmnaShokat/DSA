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
void insertAtPos(int n, int pos)
{
    node *newnode = new node;
    newnode->data = n;
    if (pos == 1)
    {
        insert(n);
        return;
    }
    node *temp = head;
    int i = 1;
    while (i < pos - 1 && temp->next != head)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == head && i < pos - 1)
    {
        cout << "invalid position .";
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void display()
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    insert(40);
    insert(30);
    insert(20);
    insert(10);
    insertAtPos(60, 3);
    display();
    return 0;
}