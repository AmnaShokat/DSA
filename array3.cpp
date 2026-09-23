#include <iostream>
using namespace std;

int main()
{
    int arr[10], size, pos;
    cout << "enter size";
    cin >> size;
    cout << "enter elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter which element you want to delete";
    cin >> pos;
    if (pos <= 0 || pos > size)
    {
        cout << "invalid position";
    }
    else
    {
        for (int i = pos - 1; i < size - 1; i++)
        {
            // int deleted = arr[i];
            arr[i] = arr[i + 1];
        }
        size--;
    }
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << "\n";
    }
}