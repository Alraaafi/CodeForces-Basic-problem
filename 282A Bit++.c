#include<stdio.h>
int main(){
    int t,i,bit=0;
    char x[4];
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%s",x);
        if(x[0]=='+' && x[1]=='+') ++bit;
        else if(x[0]=='-' && x[1]=='-') --bit;
        else if(x[1]=='+' && x[2]=='+') bit++;
        else if(x[1]=='-' && x[2]=='-') bit--;
    }
    printf("%d\n",bit);
//Alraaafi
}
