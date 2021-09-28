#include <iostream>
using namespace std;

int main()
{
    int minNo, maxNo;

    int arr[6] = {7, 3, 4, 54, 2, 5};
    maxNo = INT_MIN;
    minNo = INT_MAX;

    for (int i = 0; i < 6; i++)
    {

        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);

        // if (minNo > arr[i])
        // {
        //     minNo = arr[i];
        // }
        // if (maxNo < arr[i])
        // {
        //     maxNo = arr[i];
        // }
    }
    cout << minNo << endl;
    cout << maxNo;
}