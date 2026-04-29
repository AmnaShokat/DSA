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
void deleteVal(int val)
{
    node *temp = head;
    // empty
    if (head == NULL)
    {
        cout << "list is empty. ";
        return;
    }

    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }

    node *dltNode = temp->next;
    temp->next = dltNode->next;
    delete dltNode->next;
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
    insert(10);
    insert(20);
    insert(30);

    deleteVal(20);
    display();
}