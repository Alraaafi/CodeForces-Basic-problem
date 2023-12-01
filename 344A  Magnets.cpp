#include<iostream>
using namespace std;
int main()
{
    int t,c=1,a;
    cin >> t;
    while(t--)
    {
        int s;
        cin >> s;
        //scanf("%s",str);
        if(s==10)
        {
            if(a==2)
                c++;
            a = 1;
        }
        if(s==01)
        {
            if(a==1)
                c++;
            a = 2;
        }

    }

    cout << c << endl;
}
