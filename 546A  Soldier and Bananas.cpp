#include<iostream>
using namespace std;
int main(){
    unsigned int k,w;
    long long unsigned n,cost=0;
    cin>>k>>n>>w;
    w++;
    while(w--){
        cost = cost+(k*w);
    }
    if(cost<n) cout<<0<<endl;
    else cout<<cost-n<<endl;
}
