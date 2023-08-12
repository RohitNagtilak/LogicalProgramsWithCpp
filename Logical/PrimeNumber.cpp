#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int num;
		cout << "\n Enter number to check whether a number is prime number or not : ";
		cin >> num;

		int flag = 0;
		if (num == 1 || num == 0)
			flag = 1;

		for (size_t i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << num << " is a prime number." << endl;
		}
		else
		{
			cout << num << " is not a prime number." << endl;
		}
	}

	return 0;
}