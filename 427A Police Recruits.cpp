#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k=0,a=0,crm=0,man=0,i,day;
    cin >>n;
    for(i=1; i<=n; i++)
    {
        cin >>day;
        if(day==-1)
        {
            crm++;
            if(k>0) a++;


        if(crm>0 && a>0 && man>0)
            {
                crm--;
                man--;

            }
        }
        //cout  <<"man - "<< man<<endl;


        else
        {
            if(crm>0 && a>0)
            {
                //crm = crm - day;
                //man =  man + day;
            }
            if(crm<0) crm = 0;
            man =  man + day;

            k++;
        }
    }
    cout << crm<<endl;
}
