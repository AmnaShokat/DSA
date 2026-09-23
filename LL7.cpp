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
void length()
{
    node *temp = head;
    int count;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    cout << "length : " << count << endl;
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
    insertAtStart(10);
    insertAtStart(20);
    insertAtStart(30);
    insertAtStart(40);
    insertAtStart(50);
    insertAtStart(60);
    insertAtStart(70);
    insertAtStart(80);
    length();

    display();
}
