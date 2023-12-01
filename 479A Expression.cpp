#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,mx,mn;
        cin>>a>>b;
        mx = max(a,b);
        mn = min(a,b);
        if(mx==mn)
            cout<<mx*mx*4<<endl;
        else if(mx<=mn*2)
            cout<<mn*mn*4<<endl;
        else
            cout<<mx*mx<<endl;
    }
}
