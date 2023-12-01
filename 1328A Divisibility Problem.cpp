#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        if(n%m==0)
            cout << 0 << endl;
        else
            cout << m - (n%m) << endl;
    }


    //const int a = 10;
    //cout << a << endl;
}
