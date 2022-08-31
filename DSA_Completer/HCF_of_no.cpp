#include <iostream>
using namespace std;

int gcd(int *a, int *b)
{
    int res = min(*a, *b);
    while (res > 0)
    {
        if (*a % res == 0 && *b % res == 0)
        {
            *a=*a+1;
            break;
        }

        res--;
    }
    return res;
}
int main()
{
    int a, b;
    cout << "Enter the number a and b :";
    cin >> a >> b;
    cout<<"HCF-->"<<gcd(&a, &b)<<"   "<<a;

    return 0;
}