#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int x[3],i,dis;
    for(i=0; i<3; i++)
        cin >> x[i] ;
    sort(x,x+3);



    dis = (x[2]-x[1]) + (x[1]-x[0]);
    cout<<dis<<endl;
}
