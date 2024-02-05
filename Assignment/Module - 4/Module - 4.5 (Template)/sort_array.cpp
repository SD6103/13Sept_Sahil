// Write a program of to sort the array using templates
#include <iostream>
using namespace std;

template <typename T>
class Sorting
{
public:
    Sorting(T arr[])
    {
        sortArray(arr);
    }

    void sortArray(T arr[])
    {
        int n = 10; // Size of the array
        int i, j;
        // Perform sorting
        for (i = 0; i < n; i++)
        {
            // Find the minimum element in the unsorted array
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main()
{
    int array[10] = {25, 42, 1, 68, 75, 4, 9, 63, 55, 6}; // Array

    Sorting<int> srt(array); // Object

    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
