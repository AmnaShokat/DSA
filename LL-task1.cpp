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

int display(int userInput)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {

        if (userInput == temp->data)
        {
            count++;
        }
        // cout << temp->data << endl;
        temp = temp->next;
    }
    return count;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(10);
    insert(30);
    insert(20);
    insert(30);
    insert(40);
    insert(30);
    // cout << count;
    int userInput;
    cout << "enter number to check: ";
    cin >> userInput;
    cout << (display(userInput));
}