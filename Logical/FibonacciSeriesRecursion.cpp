#include <iostream>
using namespace std;
void fib(int num)
{
    static int x = 0, y = 1, z;
    if (num > 0)
    {
        z = x + y;
        x = y;
        y = z;
        cout << z << '\t';
        fib(num - 1);
    }

}

int main() {

    int n;
    cout << "Enter number::";
    cin >> n;
    cout << "0" << "\t1\t";
    fib(n - 2);
    return 0;
}