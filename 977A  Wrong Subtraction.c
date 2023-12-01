#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);

    for(i=1; i<=k; i++){
        if(n%10==0) n/=10;
        else n--;
        if(n<0) break;
        //printf("%d\n",n);
    }
    printf("%d",n);
//Alraaafi
}
