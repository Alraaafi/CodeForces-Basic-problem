#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int s,n,x,y,i,a=0,b=0,k=0;
    cin >> s >> n;
    b = s;
    for(i=1; i<=n; i++)
    {
        cin >> x >> y;
        a =x;

        if(a>=b)
        {
            k++;
            //break;
        }
         b = y+b;
        //b = b + s;
    }

    if(k==0)
     cout << "YES"<<endl;
    else
       cout << "NO"<<endl;


}
