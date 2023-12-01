#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,num,d,a[5],i,j,k,l;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> num;
        //n=1;
        j = 0;
        d =10;
        k=0;
        while(num)
        {
            if(num%d!=0)
            {
                a[j]= num%d*pow(10,k);
                j++;

            }
            //d = d*10;
            num = num/10;
            k++;
        }
        cout<<j<<endl;
        for(l=0; l<j; l++)
        {
            cout<<a[l]<<" ";
        }
        cout<<endl;
    }


    //cout << c<<endl;
}
