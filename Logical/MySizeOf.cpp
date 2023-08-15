#include<iostream>
using namespace std;
#define MySizeOf(type) (char*)(&type+1) - (char*)(&type)

int main()
{
	int    mInt;
	double mDouble;
	char   mChar;
	cout <<"Size of Int    : " << MySizeOf(mInt)    << endl;
	cout <<"Size of Double : " << MySizeOf(mDouble) << endl;
	cout <<"Size of Char   : " << MySizeOf(mChar)   << endl;
	return 0;
}

/*
//Int
Address of dummy + 1 : 0000001BB7F6F778
Address of dummy     : 0000001BB7F6F774
-------------------------------------------------
Size of int: 4 bytes			      4

//Double
Address of dummy + 1 : 0000001BB7F6F780
Address of dummy     : 0000001BB7F6F778
-------------------------------------------------
Size of double: 8 bytes               8 -> (16-8)

//Char
Address of dummy + 1 : 0000001BB7F6F775
Address of dummy     : 0000001BB7F6F774
-------------------------------------------------
Size of char: 1 bytes                 1
*/