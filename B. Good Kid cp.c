#include<stdio.h>
int main()
{
    int t,n,i,minm,indx;
    scanf("%d",&t);


    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        long long int pro=1;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }



        minm = a[0];
        indx = 0;
        for(i=1; i<n; i++)
        {
            if(minm>a[i])
            {
                minm = a[i];
                indx = i;
            }
        }

        a[indx] = a[indx]+1;


        for(i=0; i<n; i++)
        {
            //if(a[i]!=0){
            pro = pro*a[i];
            //}

        }
        printf("%lld\n",pro);

        //fflush(stdin);


    }
}
