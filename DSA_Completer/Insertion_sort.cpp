#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//  In this we assume that first element is sorted 
   for(int i=1;i<n;i++)
{
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    } 
    arr[j+1]=current;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}