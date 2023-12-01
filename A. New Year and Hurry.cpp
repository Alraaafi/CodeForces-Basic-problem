#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k,t,s=0,c=0,i;
    cin >> n >> k;
    t = 240 - k;
    for(i=1; i<=n; i++)
    {
        s = s + i*5;
        if(t<s) break;
        c++;
        //cout << c<<"   "<<t<<"    "<<s<<endl;
    }

       cout << c<<endl;


}
