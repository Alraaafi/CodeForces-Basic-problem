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
        long long int n,i,j;
        cin >> n;
        //long long int a[n];
        for(i=0,j=1; i<n-1; i++,j=j+2)
        {
            cout << j<<" ";
        }
        cout << j<<endl;
    }
}
