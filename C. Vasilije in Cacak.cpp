#include<iostream>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;


    while(t--)
    {
        long long int n,k,x,l,h,sn,df;
        cin >> n >> k >>  x;
        //long long int a[n];

        l = (k*(k+1))/2;
        sn = (n*(n+1))/2;
        df  = n - k;
        df = (df*(df+1))/2;
        h = sn - df;

        if(x<=h && x>=l)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;

    }
}
