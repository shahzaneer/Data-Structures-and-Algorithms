#include <iostream>
using namespace std;

//  traversal --> traverse through the array!
void traversal(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << endl;
    }
}

void insertion(int *p, int size, int index, int value)
{
    if (index >= size)
    {
        cout << "Insertion is not possible";
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            *(p + i + 1) = *(p + i);
        }

        *(p + index) = value;
    }
}

void deletion(int *p, int actualSize, int CurrentSize, int index)
{

    for (int i = index; i < CurrentSize; i++)
    {
        *(p + i) = *(p + i + 1);
    }
}
int main()
{

    static int array[10] = {1, 2, 3, 4, 5};
    // traversal(array,5);
    // insertion(array, 10, 3, 55);
    // traversal(array,10);
    deletion(array, 10, 5, 2);
    traversal(array, 10);

    return 0;
}