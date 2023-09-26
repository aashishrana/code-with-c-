#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int even[6] = {2, 4, 6, 8, 10, 12};
    // cout << binarySearch(arr, 5, 8);

    int index = binarySearch(even, 6, 13);
    cout << " Index of 12 is " << index << endl;
}