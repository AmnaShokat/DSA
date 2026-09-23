#include <iostream>
using namespace std;

int main()
{
    // 1
    // int arr1[5] = {1, 2, 3, 4, 5};
    // cout << arr1[2];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr1[i] << endl;
    // }

    // 2
    // int arr2[5];
    // cout << "please enter the 5 elements";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr2[i];
    // }
    // cout << arr2[1];

    // 3
    // int arr2[5];
    // int arr = 0;
    // cout << "please enter the 5 elements: " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr2[i];
    //     arr = arr2[i] + arr;
    // }
    // cout << arr;

    // 4
    //  int arr2[5];
    //  int arr = 0;
    //  cout << "please enter the 5 elements: " << endl;
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cin >> arr2[i];
    //      arr = arr2[i] + arr;
    //  }

    // cout << "average: " << arr / 5;

    // 5
    // int n = 5;
    // int arr[n] = {4, 5, 7, 2, 4, 1};
    // int max = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     cout << arr[i] << endl;

    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << "max value is: " << max;

    // 6
    // int n = 5;
    // int arr[n] = {4, 5, 7, 2, 4, 1};
    // int min = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     cout << arr[i] << endl;

    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout << "min value is: " << min;

    // 7
    // int size = 9;
    // int arr[size] = {4, 5, 7, 2, -4, -2, 1};
    // int p = 0;
    // int n = 0;
    // for (int i = 1; i < size; i++)
    // {
    //     cout << arr[i] << endl;

    //     if (arr[i] >= 0)
    //     {
    //         p++;
    //     }
    //     else if (arr[i] < 0)
    //     {
    //         n++;
    //     }
    // }
    // cout << "+ve: " << p << endl;
    // cout << "-ve: " << n;

    // 8
    // int n = 9;
    // int arr[n] = {4, 5, 7, 2, 4, 1};
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << arr[i] << endl;

    //     if (arr[i] % 2 == 0)
    //     {
    //         cout << arr[i] << "number is even" << endl;
    //     }
    //     if (arr[i] % 2 != 0)
    //     {
    //         cout << arr[i] << "number is odd" << endl;
    //     }
    // }

    // 9
    // int size = 5;
    // int array[size] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < size; i++)
    // {
    //     int arr = array[size - 1 - i];
    //     cout << arr << endl;
    // }

    // 10
    int size = 5;
    int array[size] = {1, 2, 3, 4, 5};

    int temp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    // cout << "reverse last and first element: " << endl;

    // cout << array[0] << endl;
    // cout << array[size - 1] << endl;
}