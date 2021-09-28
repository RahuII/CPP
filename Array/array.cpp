#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    // takin array from user

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Printing array

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}