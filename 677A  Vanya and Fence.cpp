#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,i,h,min=0;
	cin >> n >> h;
	int mem[n];
	for(i=0; i<n; i++){
        cin >> mem[i];
	}

	for(i=0; i<n; i++){
        if(mem[i]>h) min = min + 2;
        else if(mem[i]<=h) min++;
	}

	cout<<min<<endl;



}
