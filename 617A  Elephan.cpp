#include<iostream>
using namespace std;
int main(){
    unsigned int n,k;
    cin>>n;
     k = n/5;
    if(n%5!=0) k++;
    cout<<k<<endl;
}
