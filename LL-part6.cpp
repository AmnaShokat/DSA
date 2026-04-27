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
    head = newnode;
}
void deleteLast()
{
    if (head == NULL)
    {
        cout << "list is empty. ";
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  " << temp->next << endl;
        temp = temp->next;
    }
}

int main()
{
    // insert(10);
    // insert(20);
    // insert(30);

    deleteLast();
    display();
}