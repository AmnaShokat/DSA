#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *current = nullptr;
void insertAtStart(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    if (current == nullptr)
    {
        current = newnode;
        current->next = newnode;
    }
    else
    {
        newnode->next = current->next;
        current->next = newnode;
    }
}
void dltAtBeg()
{
    node *temp = current->next;
    current->next = temp->next;
    delete temp;
}

void display()
{
    struct node *temp;
    if (current == 0)
    {
        cout << "list is empty";
    }
    else
    {
        temp = current->next;

        while (temp->next != current->next)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << temp->data;
    }
}
int main()
{

    insertAtStart(10);
    insertAtStart(20);
    insertAtStart(30);
    insertAtStart(40);
    insertAtStart(50);
    dltAtBeg();

    display();
}