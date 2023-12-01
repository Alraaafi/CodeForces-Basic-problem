#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[3],k=0,s=0,i;
    cin >>n;
    for(i=0; i<3; i++)
    {
        cin >>a[i];
    }
    sort(a,a+3);
    for(i=0; i<3; i++)
    {
        s = s+a[i];
        if(s>n)
        {
            //cout<<s<<"  "<<n<<endl;
            break;
        }
        //cout<<s<<"  "<<n<<endl;
        k++;
    }
    cout<<k<<endl;
}
