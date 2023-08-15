#include<iostream>
using namespace std;
void RemoveDuplicate(int arr[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size;)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j; k < size - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				size--;
			}
			else
			{
				j++;
			}
		}
	}
}

void Display(int arr[], int& size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 1,2,3,2,3,4,5,4,5,6,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	RemoveDuplicate(arr, size);
	Display(arr,size);
	return 0;
}


//2, 4, 2, 7, 8, 4, 1, 9, 7
//2, 4, 7, 8, 1, 9,
//
//= > 2, 4, 2, 7, 8, 4, 1, 9, 7    size = 9
//= > 2, 4, 7, 8, 4, 1, 9, 7 = > 2  size = 8
//= > 2, 4, 7, 8, 1, 9, 7 = > 2, 4  size = 7
//= > 2, 4, 7, 8, 1, 9, = > 2, 4, 7 size = 6