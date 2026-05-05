#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *pre;
};
node *head = NULL;

void insert(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = head;
    newnode->pre = NULL;

    if (head != NULL)
    {
        // head->pre=newnode;
        newnode->next = head;
        head->pre = newnode;
    }
    head = newnode;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << temp << endl;
        temp = temp->next;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
}