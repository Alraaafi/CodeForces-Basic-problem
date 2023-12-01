#include <iostream>
using namespace std;
int main()
{
    int n,i,mx=0,mn=0,c=0;
    cin >> n;
    int a[n];

    cin >> a[0];
    mx=mn = a[0];
    for(i=1; i<n; i++)
    {
        cin >> a[i];
       // mx=mn = a[0];
        if(mx<a[i])
        {
            mx = a[i];
            c++;
        }
        if(mn>a[i])
        {
            mn = a[i];
            c++;
        }
    }

    cout << c;
    return 0;
}
