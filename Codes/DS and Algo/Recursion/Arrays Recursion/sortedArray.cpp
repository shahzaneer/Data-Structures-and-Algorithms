#include <iostream>
using namespace std;

int isSortedArrayIterative(int *arr, int n);
int isSortedArrayRecursive(int *arr, int n, int index);

int main()
{
    int arr[] = {1, 1, 3, 4, 9, 8};
    cout << isSortedArrayIterative(arr, 6);
    cout << isSortedArrayRecursive(arr, 6, 0);
    return 0;
}

int isSortedArrayIterative(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

int isSortedArrayRecursive(int *arr, int n, int index)
{
    if (index == n)
    {
        return 1;
    }

    return arr[index] > arr[index + 1] && isSortedArrayRecursive(arr, n, ++index);
}