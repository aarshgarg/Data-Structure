#include<iostream>
using namespace std;
 int linearsearch(int n,int arr[],int key)
 {
     for (int i=0;i<arr[i];i++)
     {
         if(arr[i]==key)
         {
             return i;
         }
    
        
     }
     return -1;
 }

 int main()
 {
     int n;
     cout<<"how many elemenst have to have to pass in tha array"; 
     cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
          int key;
          cout<<"the elements which we have to find :";
          cin>>key;
          cout<<linearsearch(n,arr,key)<<endl;
          return 0;
 }