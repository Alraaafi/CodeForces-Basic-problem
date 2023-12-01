#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(i==n && i%2==0)
            cout << "I love it" <<endl;
        else if(i==n && i%2!=0)
            cout << "I hate it" <<endl;
        else if(i!=n && i%2==0)
            cout << "I love that ";
        else if(i!=n && i%2!=0)
            cout << "I hate that ";


    }

    //const int a = 10;
    //cout << a << endl;
}
