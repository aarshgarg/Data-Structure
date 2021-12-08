#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int size,i,pos,num;
    cout<<"Enter the size of the array";
    cin>>size;
    cout<<"Enter the element in the array"<<endl;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"print the element in the array"<<endl;;   
     for(i=0;i<size;i++)
     {
         cout<<arr[i]<<endl;
     }
     cout<<"Enter the number do we like to add in the array";
     cin>>num;
     cout<<"At which we position we like to add";
     cin>>pos;
     if(pos<0||pos>size)
     {
         cout<<"invalid";
     }

     else{
     for(i<size-1;i>=pos-1;i--)
     {
         arr[i+1]=arr[i];
     }
     arr[pos-1]=num;
    // size++;
     
     size++;
}
cout<<"print the updated array"<<endl;
for(i=0;i<size;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}
