#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,x;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //scanf("%d",&x);
    //x = a[n-1];
    for(i=0; i<n; i++)
    {
        //if(a[i]>0)
            if(a[i]<=10)
              printf("A[%d] = %d\n",i,a[i]);


    }
    //printf("%d %d\n",x,p);
    return 0;
}
