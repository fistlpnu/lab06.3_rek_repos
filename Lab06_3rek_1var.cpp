#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
void printArray(const T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

template<typename T>
void sortArray(T arr[], int size)
{
    if (size == 1)
    {
        return;
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, size - 1);
}

int main()
{
    const int size = 5;
    int arr[size] = { 9, 7, 5, 3, 1 };

    cout << "Original array:" << endl;
    printArray(arr, size);

    sortArray(arr, size);

    cout << "Sorted array:" << endl;
    printArray(arr, size);

    return 0;
}
