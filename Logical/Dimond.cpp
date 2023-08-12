#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter Number :";
	cin >> num;
	for (size_t i = 0; i < num; i++)
	{
		for (size_t k = num - i; k > 0; k--)
			cout << " ";
		for (size_t j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (size_t i = num; i > 0; i--)
	{
		for (size_t z = 0; z < num - i; z++)
			cout << " ";

		for (size_t j = i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}