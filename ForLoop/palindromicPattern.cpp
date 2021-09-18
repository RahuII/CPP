#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int decr = i;
        for (int j = 1; j <= i; j++)
        {
            cout << decr;
            decr--;
        }
        int incr = 2;
        for (int j = 2; j <= i; j++)
        {
            cout << incr;
            incr++;
        }
        cout << "\n";
    }
}