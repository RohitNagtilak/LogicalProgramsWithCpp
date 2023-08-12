#include <iostream>
using namespace std;
int main()
{
	char* firstString = new char[10];
	char* secondString = new char[10];

	cout << "Enter First String : ";
	cin.getline(firstString, 10);

	cout << "Enter Second String : ";
	cin.getline(secondString, 10);

	cout << "\nStrings Before Swap :" << endl;;
	cout << "First String :" << firstString << endl;
	cout << "Second String :" << secondString << endl;

	char* tempString = firstString;
	firstString = secondString;
	secondString = tempString;

	cout << "\nStrings After Swap :" << endl;
	cout << "First String :" << firstString << endl;
	cout << "Second String :" << secondString << endl;

	delete[] firstString;
	delete[] secondString;

	return 0;
}