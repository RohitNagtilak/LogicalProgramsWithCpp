#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number to check it is palindrome or not : ";
	cin >> num;

	int n = num;
	int tempNum = 0;
	while (num != 0)
	{
		int x = num % 10;
		tempNum = tempNum * 10;
		tempNum = tempNum + x;
		num = num / 10;
	}

	if (tempNum == n)
	{
		cout << "Number is palindrome." << endl;
	}
	else
	{
		cout << "Number is not palindrome.";
	}

	return 0;
}