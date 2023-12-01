#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k=10,temp,m,sum=0,count=0;
    double s=0;
    scanf("%d",&n);
    int co[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&co[i]);
        s = s + co[i];
    }
    //s= ceil(s/2);
    s = s/2;
    //s = (int)s;
     //k = k*(int)s;
    //printf("%d\n",k);
    m = n;
    for(i=0; i<n; i++)
    {
        for(j=0; j+1<m; j++)
        {
            if(co[j]>co[j+1])
            {
                temp = co[j];
                co[j] = co[j+1];
                co[j+1] = temp;
            }
        }
        m--;
    }

    for(i=n-1; i>=0; i--)
    {
        //printf("%d\n",co[i]);
        sum = sum + co[i];
        count++;
        if(sum>s)
            break;

    }
    printf("%d\n",count);

}
