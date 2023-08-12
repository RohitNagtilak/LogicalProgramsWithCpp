// Take An Input As A String And Arrange It's Every Characters
// In Alphabetical Order From A->Z(Ascending).
// For EX : NextGenCoder->CdeeeGNnortx

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	char strTemp;
	cout << "Enter A String :";
	getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int i, j;
	for (i = 0; i < str.length() - 1; i++)
	{
		for (j = i + 1; j < str.length(); j++)
		{
			if (str[i] > str[j])
			{
				strTemp = str[i];
				str[i] = str[j];
				str[j] = strTemp;
			}
		}
	}
	cout << "\n OutPut :" << str << "\n";
	return 0;
}