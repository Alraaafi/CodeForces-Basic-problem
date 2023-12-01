#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,c=0;
    cin >> t;
    string str;

    while(t--)
    {
        cin >> str;
        if(str[0]=='T')
            c = c + 4;
        else  if(str[0]=='C')
            c = c + 6;
        else  if(str[0]=='O')
            c = c + 8;
        else  if(str[0]=='D')
            c = c + 12;
        else  if(str[0]=='I')
            c = c + 20;
    }
    cout << c << endl;
}

