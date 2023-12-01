#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,i,j,t,yes;
	cin >> n >> t;
	char q[n];
	cin >> q;
	yes =0;
	for(i=0; q[i]!='\0'; i++){
        if(q[i]=='B' && yes==0){
            for(j=i; q[j]!='\0'; j++)
            if(q[j]=='G' ){
                yes = 1;
                break;
            }
            if(yes==1) q[i]=='G';
            else q[i]='B';
        }
        else if((q[i]=='G' && q[i+1]=='B' && yes == 1) || (q[n-1]=='G'&& yes == 1))
        {
            yes = 0;
            q[i]='B';
        }
        //else q[i]='B'
	}
	cout<<q<<endl;

}
