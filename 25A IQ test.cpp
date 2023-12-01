#include <iostream>
using namespace std;
int main()
{
    int n,c,k,i,e=0,o=0;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    //k = a[0]%2;
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            o++;
        if(a[i]%2==0)
            e++;
    }

    for(i=0; i<n; i++)
    {
        if(e==1 && a[i]%2==0)
        {
            c = i+1;
            break;
        }
        if(o==1 && a[i]%2!=0)
        {
            c = i+1;
            break;
        }
    }



    cout << c;
    return 0;
}
