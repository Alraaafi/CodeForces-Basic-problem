#include<stdio.h>
int main(){
    int n,a1,a2,a3,i,sov=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%d %d %d",&a1,&a2,&a3);
        if( (a1==1 && a2==1)||(a2==1 && a3==1)||(a3==1 && a1==1) ) sov++;
    }
    printf("%d\n",sov);

//Alraaafi
}
