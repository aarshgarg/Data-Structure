#include <iostream>
using namespace std;
void merge(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
}
int main()
{
    int n, m;
    cout << "Size of the first array:";
    cin >> n;
    cout << "Size of the Second array:";
    cin >> m;

    int a[n], b[m];

    // cout<<"Size of the second array:";
    // cin>>m;
    cout << "Enter the element in the first array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << " ";
    }
    cout << "Enter the element in the Second array:" << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
        cout << " ";
    }
    merge(a, b, n, m);

    return 0;
}