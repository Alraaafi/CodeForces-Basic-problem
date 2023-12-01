#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=-1,x;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        //a[i] = abs(a[i]);
        //printf("%d\n",s);
    }
    scanf("%d",&x);
    for(i=0; i<n; i++)
    {
        //if(a[i]>0)
        if(x==a[i])
        {
            c=i;
            //printf("\t\t%d\n",c);
            break;
        }


    }
    printf("%d\n",c);
    return 0;
}
