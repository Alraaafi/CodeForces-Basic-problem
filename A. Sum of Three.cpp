#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<stdio.h>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        long long int x,y,z,n;
        cin >>n;
        if(n<7 || n==9)
            cout<<"NO"<<endl;
        else
        {
            if(n%3==0)
            {
                x =1;
                y = 4;
                z = n - 5;
            }
            else
            {
                x =1;
                y = 2;
                z = n - 3;
            }
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }

   }
}
