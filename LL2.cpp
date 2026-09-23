#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head = nullptr;

void insertAtStart(int value)
{
    node *newnode = new node();

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}
void display()
{
    struct node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    insertAtStart(10);
    insertAtStart(20);
    insertAtStart(30);
    insertAtStart(40);
    insertAtStart(50);
    display();
}