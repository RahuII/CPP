#include <iostream>
using namespace std;

int Bsearch(int arr[], int n, int key)
{
    int mid;
    int s = 0;
    int e = n;

    while (s <= e)
    {
        mid = (e + s) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s += 1;
        }
        else
        {
            s -= 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key value:\n";
    cin >> key;
    cout << Bsearch(arr, n, key);
}