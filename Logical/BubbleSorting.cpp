#include<iostream>
using namespace std;

void ArraySort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr=new int[size];
    cout << "Enter " << size << " Numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    ArraySort(arr, size);

    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
