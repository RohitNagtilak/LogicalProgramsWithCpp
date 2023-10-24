#include<iostream>
using namespace std;
int countSevensInRange(int start, int end)
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 10 == 7)
            {
                count++;
            }
            num = num / 10;
        }
    }
    return count;
}

int main()
{
    int count = countSevensInRange(1, 1000);
    cout << "The number of occurrences : " << count << endl;
    return 0;
}
