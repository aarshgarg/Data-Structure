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
        int counter=1;

   while(counter<n){
    for(int i=0;i<n-counter;i++)
    {
    if(arr[i]>arr[i+1])
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        //cout<<arr[i];

    }
    }
    counter++;
    
   }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
// in bubble sort the number of the iteration is n-1
// if the element in the array is the 6 the number of the iteration is the n-1
// in bubble sort the swaping is at the adjacent element
}