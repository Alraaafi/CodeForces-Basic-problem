#include<iostream>
using namespace std;
int main()
{
    long long int n,k,z;
    cin >> n >> k;

    if(n%2==0)
    {
        if( (float)k <= n/2.0 )
            z = 1 + (k-1) *2;
        else
            z = 2 + ((k - n/2)-1) *2;
    }
    else
    {
        if( k <= (n/2)+1 )
            z = 1 + (k-1) *2;
        else
            z = 2 + ((n/2)-1) *2;
    }
    cout << z << endl;

    //const int a = 10;
    //cout << a << endl;
}
