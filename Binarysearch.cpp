#include<iostream>
using namespace std;
 int binarysearch(int n,int arr[],int key)
 {
     int s=0;
     int e=n;
     while(s<=e)
     {
         int mid =(s+e)/2;
         if(arr[mid]==key)
         {
             return mid;
         }     
         else if (arr[mid]>key)
         {
             e=mid-1;
         }
         else{
         s=mid+1;
         }
         }
         return -1;
 }
int main()
{
    int n;
    cout<<"how many number i n the array ="<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Array number"<<endl;
            cin>>arr[i];

    }
    int key;
    cout<<"the number we have do we find "<<endl;
        cin>>key;
cout<<binarysearch(n,arr,key);

return 0;
}