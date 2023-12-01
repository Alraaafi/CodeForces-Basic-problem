#include <cmath>
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,i,p;
    double n=0,s;
    cin >> a;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(12);

    for(i=1;i<=a;i++)
    {
        cin >> p;
        n = n + (p/100.0);
    }

    s = 100 * (n/a);
    cout << s << endl;
    return 0;
}
