#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of the digit int tht element =";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Enter the element in the array:";
    cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}