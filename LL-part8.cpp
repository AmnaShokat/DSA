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
void dlt()
{
    node *temp = head;
    while (temp != NULL)
    {
        node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "deleted node: " << temp->data << "  " << temp->next << endl;
        temp = temp->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);

    dlt();
    display();
}