#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
 int t;
 cin >> t;
 while(t--)
 {
     int n,k,i;
     cin >>n>>k;
     //int a[n];
     int a,c=0;
     for(i=0; i<n; i++)
     {
         cin >> a;
         if(a==k)
         {
             c++;
         }
     }
     if(c==0)
        cout << "NO" <<endl;
     else
        cout << "YES" <<endl;

 }
}
