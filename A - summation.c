#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    unsigned s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        //a[i] = abs(a[i]);
        //printf("%d\n",s);
    }
    for(i=0; i<n; i++)
    {
        //if(a[i]>0)
        if(a[i]>0)
            s = s + a[i];
        else
            s = s - a[i];
        //printf("%d\n",s);
    }
    printf("%u\n",s);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    unsigned s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        //a[i] = abs(a[i]);
        //printf("%d\n",s);
    }
    for(i=0; i<n; i++)
    {
        //if(a[i]>0)
        if(a[i]>0)
            s = s + a[i];
        else
            s = s - a[i];
        //printf("%d\n",s);
    }
    printf("%u\n",s);
    return 0;
}
