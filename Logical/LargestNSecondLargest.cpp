#include<iostream>
using namespace std;

void findLargestTwoNumbers(int arr[], int size, int& largest, int& secondLargest)
{
    largest = secondLargest = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size < 2)
    {
        cout << "The array should have at least two elements." << endl;
        return 1;
    }

    int *arr=new int[size];
    cout << "Enter " << size << " Numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest, secondLargest;
    findLargestTwoNumbers(arr, size, largest, secondLargest);

    cout << "The largest number is: " << largest << endl;
    cout << "The second largest number is: " << secondLargest << endl;

    return 0;
}