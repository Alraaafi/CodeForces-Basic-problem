#include<stdio.h>
#include<math.h>
int main()
{
    int c,r,i,j,a[5][5];
    //scanf("%d",&n);
    //int a[n];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1){
                r =i;
                c = j;
                break;
            }

        }
    }
    r++;
    c++;
    printf("%d\n",abs(c-3)+abs(r-3));
    return 0;
}
