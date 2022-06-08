#include <iostream>
using namespace std;

int insert(int arr[], int n, int pos, int x)
{
    
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
    int n, pos, x;
    int arr[100];
    cout << "Enter the size of Array=";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << endl;
    }

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
    insert(arr,n,pos,x);
    
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
