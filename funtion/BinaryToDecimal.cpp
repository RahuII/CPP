#include <iostream>
#include <math.h>
using namespace std;

int dec(int n)
{
    int temp = 0;
    int result = 0;
    int sq = 0;
    while (n > 0)
    {
        temp = n % 10;
        if (temp == 1)
        {
            result += pow(2, sq);
        }
        n = n / 10;
        sq++;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter your binary input:\n";
    cin >> n;
    cout << dec(n);
}