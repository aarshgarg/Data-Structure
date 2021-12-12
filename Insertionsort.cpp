#include<iostream>
using namespace std;

void Printarray(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nElement="<<arr[i]<<endl;
    }
}

void Insertionsort(int *arr, int n)
{
     int key, j;
     

    for(int i=1; i<=n-1;i++)
    {
       key=arr[i];
       j=i-1;

            while(  j>=0 && arr[j]<key)
            {
                arr[j+1]=arr[j];
                j--;

            }
            arr[j+1]=key;
        }
        
       //  arr[j+1]=key;
    }

int main()
{
    int arr[50];
    int n;
    cout<<" Enter the number of element in the array"<<endl;
    cin>> n;
    cout<<"Enter the number in the array"<<endl;
    for(int i=0;i<n;i++)
    {
       // cout<<"Enter the number in the array"<<endl;
        cin>>arr[i];

    }

    cout<<"\n\n!!!!Print the data before insertion sort!!!! "<<endl;
    Printarray(arr,n);
    Insertionsort(arr,n);
    cout<<"\n!!!!Print the data after insertion sort!!!!"<<endl;
    Printarray(arr,n);
    return 0; 
}