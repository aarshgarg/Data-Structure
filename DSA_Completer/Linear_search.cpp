#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }  
  int key;
  cout<<"Enter the number=";
  cin>>key;
    cout<<linearsearch(arr,key,n);
   return 0;
}  