#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,s=0,i=1;
    cin>>n;
    //for(i=1; i)
    while(s<=n)
    {
        s = s + (i*(i+1))/2;
        //cout<<"CK:  "<<i<<"     "<<s<<endl;
        if(s>n) break;
        i++;
    }
    cout<<i-1<<endl;

}
