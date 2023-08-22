//input  = ABCDEFGHIJK
//output = ABDCEFHGIJK
#include<iostream>
using namespace std;
void Swap(string& input)
{
	bool f = false;
	string output= input;
	for (int i = 0; i < output.length() - 1; i=i+2)
	{
		if (f)
		{
			char temp   = output[i];
			output[i] = output[i+1];
			output[i+1]   = temp;
		}
		f = !f;
	}
	input = output;
}
int main()
{
	string str;
	cout << "Input  :";
	cin >> str;
	Swap(str);
	cout << "Output :"<< str;
	cout << endl;
	return 0;
}