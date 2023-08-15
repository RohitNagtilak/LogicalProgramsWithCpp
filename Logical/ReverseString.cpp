#include<iostream>
using namespace std;
string ReverseString(const string &str)
{
	string temp = str;
	for (int i = 0; i < temp.length()/2; i++)
	{
		char tempChar = temp[i];
		temp[i] = temp[temp.length() - i - 1];
		temp[temp.length() - i - 1] = tempChar;
	}
	return temp;
}

int main()
{
	
	string str = "RohitNagtilak";
	string reversedStr = ReverseString(str);
	cout << "Before = " << str<<endl;
	cout << "After = " << reversedStr<<endl;
	
	return 0;
}