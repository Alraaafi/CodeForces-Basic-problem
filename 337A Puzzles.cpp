#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,m,mx,mn,rs,i,j;
    cin >> n>>m;
    int a[m],b[n];
    for(i=0; i<m; i++)
        cin>>a[i];
    sort(a,a+n);
    mn = a[n-1]-a[0];

    for(i=m-n,j=0; i<m; i++,j++)
        b[j] = a[i];
    sort(b,b+n);
    mx = b[n-1] - b[0];

    rs = mx>=mn ? mn : mx;
    cout << rs<<endl;
}

