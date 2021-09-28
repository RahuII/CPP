#include <iostream>
using namespace std;

int lSearch(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter your lenth of array:\n";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter your value of arrar:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your value, you want to search:\n";
    int key;
    cin >> key;

    cout << lSearch(arr, key, n);
}