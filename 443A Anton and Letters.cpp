#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h>
//#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i,j,c=0,ln;
    //char i;
    //ln = strlen(str);

    //for(i=97; i<=122; i++)
    //{
        for(j=0; ; j++)
        {
            if(str[j]=='}')
                break;
            //if(i==str[j])
           // {
                c++;
                cout << str[j]<<endl;
                //cout << i<<endl;
            //}

        //}
    }
    cout <<c <<endl;

}
