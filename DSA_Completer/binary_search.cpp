#include <iostream>
using namespace std;
int binary_search(int arr[], int key, int n)
{
    int start = 0;
    int end = n ;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}
int main()
{
    int n;
    cout << "Enter the number=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key element=";
    cin >> key;
    cout << binary_search(arr, key, n) << endl;
    return 0;
}