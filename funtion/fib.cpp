#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
    // return 0;
}
int fibn(int n)
{
    int t1 = 0, t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    // cout << fibn(n);
    cout << fibn(n);
}
