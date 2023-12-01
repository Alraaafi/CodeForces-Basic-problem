#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long int a,b,c;
        cin >>a>>b;
        if(a>b)
        {
            int t = a;
            a = b;
            b = t;
        }
        c = (b-a)/10;
        if((b-a)%10!=0)
            c++;
        cout<<c<<endl;
    }


}
