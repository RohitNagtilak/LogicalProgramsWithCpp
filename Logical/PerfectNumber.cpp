// A number is called Perfect number, if it's equal to the sum
// of it's proper positive divisor excluding the number itself.
// For Example, is a Perfect Number
// (1 + 2 + 4 + 7 + 14 = 28) ,28,6

#include<iostream>
using namespace std;
int main()
{
    int number;
    int sumOfProperPositiveDivisor = 0;

    cout << "Enter Number :\t";
    cin >> number;

    cout << "divisors     :\t";
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << i << " + ";
            sumOfProperPositiveDivisor += i;
        }
    }
    cout << "\b\b = " << sumOfProperPositiveDivisor;

    cout << "\nNumber       : \t" << number;
    cout << "\nsumOfProperPositiveDivisor : \t" << sumOfProperPositiveDivisor;

    if (sumOfProperPositiveDivisor == number)
        cout << "\nNumber is Perfect number.";
    else
        cout << "\nNumber is Not Perfect number.";

    return 0;
}