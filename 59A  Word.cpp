#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[101];
    int i,len,cap=0,sml=0;
    cin>>str;
    len = strlen(str);
    for(i=0; i<=len; i++){
        if(str[i]>='a' && str[i]<='z')
            sml++;
        if(str[i]>='A' && str[i]<='Z')
            cap++;
    }
    if(cap>sml) strupr(str);
    else strlwr(str);
    cout<<str<<endl;
}
