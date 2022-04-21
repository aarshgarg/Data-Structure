#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of the array size=";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if (arr[j] > arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for (int i = 0; i <= n-1; i++)
    {
        cout << arr[i];
    }
    return 0;
    

}