#include <iostream>
#include <math.h>
using namespace std;

int Dec(int n)
{
    int remender, sqValue = 0, result = 0;
    while (n > 0)
    {
        remender = n % 10;
        result += remender * pow(8, sqValue);

        n = n / 10;
        sqValue++;
    }
    return result;
}

int main()
{
    cout << "Enter your value of N:\n";
    int n;
    cin >> n;
    cout << Dec(n);
}