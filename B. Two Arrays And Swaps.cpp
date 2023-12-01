#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       long long int n,k,s;
       cin>>n>>k;

       if(k<n) s = k;
       else if(k%n==0)
         s = k + k/n;
       else
         s = k + (k/n)  + 1;

       cout<<s<<endl;
    }
}
