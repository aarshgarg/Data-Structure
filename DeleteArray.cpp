#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int size, i, pos;
    cout << "Enter the number of the element in the array";
    cin >> size;
cout << "Enter the element in the array =";
    for (i = 0; i < size; i++)
    {
       // cout << "Enter the element in the array =";
        cin >> arr[i];
    }
    cout << "write the element after the insertion"<<endl;
    for (i = 0; i < size; i++)
    {
       // cout << "write the element after the insertion";
        cout << arr[i]<<endl;;
    }
    cout << "Enter the element do we want to delete from the array";
    cin >> pos;
    if (pos < 0 || pos > size)
    {
        cout << "invalid";
    }
    else
    {
    for (i = pos - 1; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    }
    size--;
    
    cout<<"print the array after delete the element ";
    for( i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    return 0;
}