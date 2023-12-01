#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int lb=1,lc=0,ck=0;
        scanf("%d",&n);
        int a[n],b[n],c[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            fflush(stdin);
        }

        b[0] = a[0];
        for(i=1; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(a[i]%a[j]==0 && a[i]!=a[j])
                {
                    //c[j] = a[j]
                    ck++;
                    //break;
                }
            }

            if(ck==0)
            {
                c[i] = a[i];
                lc++;
            }
            else
            {
                b[i] = a[i];
                lb++;
            }
            ck=0;
        }
        if(lc==0)
        {
            printf("%d\n",-1);
        }
        else
        {
            for(i=0; i<lb; i++)
            {
                printf("%d ",b[i]);
            }
            printf("\n");
            for(i=0; i<lc; i++)
            {

                printf("%d ",c[i]);
            }
        }

        //lc=0;
        //lb =1;
    }

}

