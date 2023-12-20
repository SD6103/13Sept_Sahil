// Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <class T>

T sort(T arr[10])
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = i + 1; j <= 10; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int array[10] = {25, 42, 1, 68, 75, 4, 9, 63, 55, 6};
    sort(array);
    for (int i = 0; i <= 10; i++)
    {
        cout << array[i] << " ";
    }
}