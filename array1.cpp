#include <iostream>
using namespace std;

int main()
{
    int arr[10], size;
    cout << "enter size of array: ";
    cin >> size;
    cout << "enter the element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "elements in array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}