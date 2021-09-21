#include <iostream>
using namespace std;

int main()
{

    cout << "Enter your number\n";
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    cout << reverse << endl;
}