#include<iostream>
using namespace std;
int main()
{
    int n,x,y,i,c=0;
    cin >> n;
    cin >> x;
    int p[x];

    for(i=1; i<=x; i++)
    {
        cin >> p[i];
        if(p[i]==n)
        {
            c++;
            break;
        }
    }

    cin >> y;
    int q[y];

    for(i=1; i<=y; i++)
    {
        cin >> q[i];
        if(q[i]==n)
        {
            c++;
            break;
        }
    }

    if(c==0)
        cout<<"Oh, my keyboard!"<<endl;
    else
        cout<<"I become the guy."<<endl;


    //const int a = 10;
    //cout << a << endl;
}
