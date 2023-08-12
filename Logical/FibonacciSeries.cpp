#include<iostream>
using namespace std;
int main()
{
	int num, num1=0,num2=1, temp;
	cout << "\n Enter number to find fibonacci series :";
	cin >> num;
	int i = 0;
	cout << num1 << ", " << num2 << ", ";
	while (i!=num)
	{
		i++;
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;

		cout << temp << ", ";
	}

	return 0;
}