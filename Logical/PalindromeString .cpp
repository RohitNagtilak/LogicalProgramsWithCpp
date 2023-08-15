#include<iostream>
using namespace std;

bool CheckPalindrome(string &str)
{
	bool flag=true;
	for (int i = 0; i < str.length()/2; i++)
	{
		if (str[i] != str[str.length() - i - 1])
			flag = false;
	}
	return flag;
}

int main()
{
	string str = "nitin";
	
	if (CheckPalindrome(str))
		cout << str << " is palindrome string!" << endl;
	else
		cout << str << " is not palindrome string!" << endl;

	return 0;
}