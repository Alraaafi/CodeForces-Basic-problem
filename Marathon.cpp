#include<iostream>
#include<algorithm>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;


    while(t--)
    {
        int a[4],i,x=0;
        for(i=0; i<4; i++)
        {
            cin >> a[i];
            if(a[0]<a[i])
            {
                x++;
            }
        }
        cout <<x <<endl;
    }
}
