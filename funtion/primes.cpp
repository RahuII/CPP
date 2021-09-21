#include <iostream>
using namespace std;

bool isPrime(int n)
{
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}