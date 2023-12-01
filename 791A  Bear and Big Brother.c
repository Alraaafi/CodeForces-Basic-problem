#include<stdio.h>
int main(){
    int a,b,y=0;
    scanf("%d %d",&a,&b);
    while(1){
        a*=3;
        b*=2;
        y++;
        if(a>b) break;
    }
    printf("%d\n",y);
}
