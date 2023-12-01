#include<stdio.h>
int main(){
    int n,k=0,i;
    scanf("%d",&n);
    //k = n;
    int mem[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&mem[i]);
    }
    for(i=0; i<n; i++)
    {
        if(mem[i]==1)
        {
            k++;
            break;
        }
    }
    if(k==0)
        printf("EASY\n");
    else
        printf("HARD\n");
}
