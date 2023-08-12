#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1,2,3,4,1,2,5,6,7 ,3,4,5,6,7,8,9,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                count++;
                cout << arr[i]<<" ";

            }
        }
    }

    cout << "Count=" << count;
    return 0;
}