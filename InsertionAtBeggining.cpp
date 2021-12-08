#include<iostream>
using namespace std;
 int main()
 {
     int arr[40];
     int size,i,num;
     cout<<"Enter the size of the array";
     cin>>size;
     cout<<"Enter the element in the array";
     for(i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     cout<<"Print the array"<<endl;
     for(i=0;i<size;i++)
     {
         cout<<arr[i]<<endl;
     }
     
     cout<<"Enter the numberin the array";
     cin>>num;
   
         for(i<size-1;i>=0;i--)
         {
             arr[i+1]=arr[i];

         }
         arr[0]=num;
         size++;
     
     cout<<"Print the updated array"<<endl;
     for(i=0;i<size;i++)
     {
         cout<<arr[i]<<endl;
     }
     return 0;

 }