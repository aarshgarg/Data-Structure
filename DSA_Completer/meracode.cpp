#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of the array size=";
    cin >> n;

    int arr[n];
    cout<<" Take Input in the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n ; i++)
    {
        if(arr[i] > max) 
        max = arr[i];
    }
    cout<<"The max val in array is=";
    cout << max << endl;
   
    return 0;

}