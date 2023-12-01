#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i,one=0,zero=0,len;
    char str[101];
    cin>>str;
    len = strlen(str);
    for(i=0; i<len; i++){
        if(zero==7 || one==7) break;
        if(str[i]=='0'){
            zero++;
            one = 0;
        }
        else if(str[i]=='1'){
            one++;
            zero=0;
        }
    }
    if(zero==7 || one==7)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

}
