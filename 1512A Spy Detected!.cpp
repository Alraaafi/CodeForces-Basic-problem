#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,ina=1,inb=1,uni;
        cin >> n;
        int a[n];
        int i,x,y;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        uni = a[0];
        x = y = 0;

        for(i=0; i<n; i++)
        {
            if(uni == a[i])
            {
                ina = i;
                x++;
                //uni = a[i];
                //uni = a[i];
            }

            if(uni != a[i])
            {
                inb = i;
                y++;
                //uni = a[i];
                //uni = a[i];
            }

        }
        if(x==1)
         cout  << ina+1<<endl;
        if(y==1)
         cout  << inb+1<<endl;

    }
}
