#include <bits/stdc++.h>

using namespace std;

int binsearch(int arr[], int n, int low, int high)
{

    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == n)
    {
        return mid;
    }
    else if (arr[mid] < n)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    return binsearch(arr, n, low, high);
}
void printarr(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ",";
    }
    cout << arr[i] << "." << endl;
}

int main()
{
    //use defined
    //input array
    int arr[] = {10, 1102, 24, 4325, 5234, 525, 22, 45124, 525, 522, 13, 4, 5524, 5252, 1224, 141, 14, 85, 14734, 2356, 623};
    // number to find.
    int n = 1102;
    //Rest leave to the program;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array is -:\n";
    printarr(arr, size);
    sort(arr, arr + size);
    cout << "The Sorted Array is -: \n";
    printarr(arr, size);
    int pos = binsearch(arr, n, 0, size - 1) + 1;
    if (pos >= 0)
        cout << "Position is -: " << pos << endl;
    else
        cout << "Not Found !!" << endl;
}