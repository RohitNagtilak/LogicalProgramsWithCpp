//Check Number is SPY Number or Not.
//If the sum and product of it's digits are equal.
// Ex. 123
//  (1+2+3)=(1*2*3)
#include <iostream>
using namespace std;
int main()
{
    int number;
    int num;
    int sumOfDigit = 0;
    int multOfDigit = 1;

    cout << "Enter Number :\t";
    cin >> number;
    num = number;

    while (num != 0)
    {
        int temp = num % 10;
        num = num / 10;
        sumOfDigit = sumOfDigit + temp;
        multOfDigit = multOfDigit * temp;
    }
    cout << "\nNumber      \t" << number;
    cout << "\nSumOFDigit  \t" << sumOfDigit;
    cout << "\nMultiOFDigit\t" << multOfDigit;

    if (multOfDigit == sumOfDigit)
        cout << "\nNumber is SPY.";
    else
        cout << "\nNumber is Not a SPY.";
}
