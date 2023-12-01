#include<stdio.h>
#include<math.h>

int main()
{
    int n,l=0,d,a;
    scanf("%d",&n);
    a =n;
    while(n)
    {
        d = n%10;
        if(d!=7)
        {
            if(d!=4)
            {
               //printf("\tYES-%d\n",d);
               l++;
            }

        }
        n=n/10;

    }
    if(l==0)
        printf("YES\n");
    else
    {
        if(a%7==0 || a%4==0)
         printf("YES\n");
        else
         printf("NO\n");
    }
    return 0;
}
