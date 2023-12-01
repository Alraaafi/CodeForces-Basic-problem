#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,r,ln1,ln2,k;
        cin>>n>>m;
        char x[n+1],s[m+1];
        cin >>x;
        cin >>s;


        k = 0;
        if(x.find(s)==-1)
            r = 0;
        else if (x.find(s)==-1)
        {
            while(1)
            {
                k++;
                strcat(x,x);
                if(x.find(s)!=-1)
                {
                    r = k;
                }
                ln1 = strlen(x);
                ln2 = strlen(s);
                if(ln1>ln2)
                    break;
            }
        }
    }



}
