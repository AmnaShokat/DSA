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

void deleteFirst()
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "list is empty. ";
        return;
    }
    cout << "deleted node: " << temp->data << endl;
    head = head->next;
    delete temp;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  " << temp << endl;

        temp = temp->next;
    }
}

int main()
{
    // insert(10);
    // insert(20);
    // insert(30);

    deleteFirst();
    display();
}