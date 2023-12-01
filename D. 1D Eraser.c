#include<stdio.h>
int main()
{
    int t,n,k,i,j;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%d %d",&n,&k);
         char str[n];
         scanf("%s",str);
         int c=0,tmp,m=0;

         tmp = k;
         for(i=0; i<n; i++)
         {
             for(j=i; j<k; j++)
             {
                if(str[j]=='\0')
                {
                  m++;
                  break;
                }


                 if(str[j]=='B'){
                    c++;
                    break;
                 }
             }

             i = k;
             k =  k+k;
             if(m==1)
                {
                  break;
                }

         }
         printf("%d\n",c);
    }

}

