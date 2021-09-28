#include <iostream>
using namespace std;

string binary(int n)
{
    string s;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            s = s + "1 ";
        }
        else
        {
            s = s + "0 ";
        }
        n = n / 2;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter your Decimal value:\n";
    cin >> n;
    cout << binary(n);
}