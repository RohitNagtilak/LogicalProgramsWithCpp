//Make A function to insert items in an array and another function to remove 
//all repeated items from an array and display the array.
// For Ex. ["Next","Gen","Next","coder"]
// Output ["Next","Gen","Coder"]
#include<iostream>
#include<string>
#include<set>
using namespace std;
string m_array[100];
std::set<string> testSet;
static int i;
static int n;
void AddString(string temp)
{
	m_array[i++] = temp;
}
void RemoveRepeted()
{
	for (int k = 0; k < i; k++)
	{
		testSet.insert(m_array[k]);
	}
}
void Display()
{
	set<string>::iterator value;
	for (value = testSet.begin(); value != testSet.end(); ++value)
		cout << ' ' << *value;
}
int main()
{
	int numOfString;
	cout << "How many string you want to add :";
	cin >> numOfString;
	cout << "\nEnter " << numOfString << " Strings :\n";
	string temp;
	for (int j = 0; j < numOfString; j++)
	{
		cin >> temp;
		AddString(temp);
	}
	RemoveRepeted();
	Display();
	return 1;
}