#include<iostream>
using namespace std;
void fun(int n)
{
 if(n==0)
 {
     return ;
 }
 fun(n/2);
 cout<<(n%2);

}
int main()
{
    int x;
    cout<<"Enter the number=";
    cin>>x;
    fun(x);
    return 0;

}