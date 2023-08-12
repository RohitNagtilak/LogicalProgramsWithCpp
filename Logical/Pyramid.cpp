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

	return 0;
}