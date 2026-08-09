#include <iostream>
using namespace std;

int main()
{
    int arr[10], size, pos, element;
    cout << "enter size of array: ";
    cin >> size;

    cout << "enter the element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter position: ";
    cin >> pos;
    cout << "enter element you want to insert: ";
    cin >> element;
    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    size++;

    cout << "elements in array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}