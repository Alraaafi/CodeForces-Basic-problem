#include<iostream>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    int t,n,i,minm,indx;
    cin >> t;


    while(t--)
    {
        cin >> n;
        int a[n],pro=1;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }



        minm = a[0];
        indx = 0;
        for(i=1; i<n; i++)
        {
            if(minm>a[i])
            {
                minm = a[i];
                indx = i;
            }
        }

        a[indx] = a[indx]+1;


        for(i=0; i<n; i++)
        {
            if(a[i]!=0){
            pro = pro*a[i];
            }

        }
        cout << pro << endl;

        //fflush(stdin);


    }
}
