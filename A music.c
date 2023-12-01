#include<stdio.h>
int main()
{
    int t,i,j,n,c=0,A,B,C,D,E,F,G;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char m[n];
        scanf("%s",m);
        m[n]='\0';
        A=B=C=D=E=F=G=0;
        for(i=0; i<n-1; i++){
                c++;
            for(j=0; j<i; j++){
                if(m[j]==m[j+1]){
                    if(m[j]=='a') A=1;
                    if(m[j]=='b') B=1;
                    if(m[j]=='c') C=1;
                    if(m[j]=='d') D=1;
                    if(m[j]=='e') E=1;
                    if(m[j]=='f') F=1;
                    if(m[j]=='g') G=1;
                    c--;
                    continue;
                }
                if(m[i]==m[j] && m[i+1]==m[j+1]) c--;
            }
        }
        c = A+B+C+D+E+F+G+c;
        if(c<0)printf("1\n");
        else printf("%d\n",c);
        c = 0;
    }
}

