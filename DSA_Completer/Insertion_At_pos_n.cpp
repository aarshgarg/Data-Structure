#include <iostream>
using namespace std;

int insert(int arr[], int n, int pos, int x, int cap)
{
    if (cap == n)
    {
        return 0;
    }

    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}
int main()
{
    int n, pos, x, cap = 100;
    int arr[cap];
    cout << "Enter the size of Array=";
    cin >> n;
    cout << "Enter the element in the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cout << "Array before the nth position" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    cout << "Enter the position where we insert=";
    cin >> pos;
    cout << endl;
    cout << "Enter the number we have to insert= ";
    cin >> x;
    if (insert(arr, n, pos, x, cap))
    {
        cout << "Array after insert the number at nth position" << endl;
        for (int i = 0; i <= n; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Capacity is full";
    }
    return 0;
}
