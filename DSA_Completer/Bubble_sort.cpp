#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout<<endl;
    }
    // counter is used for the number of the iteration to sort the array
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
    }