#include<iostream>
using namespace std;
 int ConditionalSum(int arr[],int a,int b)
{
    int sum=0;
    bool add=true;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=a && add=true)
        {
            sum=sum+arr[i];
        }
        else if (arr[i]==a)
        {
            add=false;
        }
        else if(arr[i]==b)
        {
            add=true;
        }
    }
        cout<<"Print the sum of the number"<<sum<<endl;
        
    
}
int main()
{
    int n;
    int a=6;
    int b=7;
    cout<<"Array Size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ConditionalSum(arr,a,b);
    
    
    return 0;

}