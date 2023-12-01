#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[101],b[101];
    int k,l1,l2;
    cin>>a>>b;

    l1 = strlen(a);
    l2 = strlen(b);

    a[l1]='\0';
    b[l2]='\0';

    strrev(a);

    k = strcmp(a,b);

    if(k==0) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;

}
