#include<stdio.h>
int main(){
    int n,k=0,i,a,b;
    scanf("%d",&n);
    //k = n;
    //int mem[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a+1<b)
            k++;
    }

    printf("%d\n",k);
}
