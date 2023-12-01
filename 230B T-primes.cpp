#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,i,c,j,s;
    cin >> n ;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        //cout << c<<"   "<<t<<"    "<<s<<endl;
    }

    for(i=0; i<n; i++)
    {
        c=0;
        s = a[i]%10000;
        for(j=2; j<s; j++)
        {
            if(s%j==0)
            {
                c++;
            }
            if(c==2)
                break;
        }
        if(c==1)
            cout << "YES" <<endl;
        else
            cout <<"NO" << endl;
    }
       //cout << c<<endl;
}
