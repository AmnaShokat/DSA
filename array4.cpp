#include <iostream>
using namespace std;

int main()
{
    int arr[5], i;
    int *q = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "enter elements: ";
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
    cout << arr[2] << "\n";
    cout << *(arr + 1) << "\n"; // print address and * print value
    cout << arr << "\n";        // arr ==&arr
    cout << &arr << "\n";
    cout << (arr + 1) << "\n";
    cout << "------------------" << "\n";
    cout << q << "\n";
    cout << &q << "\n";
    cout << (q + 1) << "\n";
    cout << *(q + 1) << "\n";
}
