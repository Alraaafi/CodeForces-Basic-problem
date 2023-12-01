#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    long long int num,k,c=0;
    cin >> num;
    c = c + num/100;
    num = num%100;

    c = c + num/20;
    num = num%20;

    c = c + num/10;
    num = num%10;

    c = c + num/5;
    num = num%5;

    c = c + num;

    cout << c << endl;


}
