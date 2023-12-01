#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,k,y;
        cin>>x>>k;
        y = x + (k-(x%k));
            cout<<y<<endl;
    }
}
