#include<stdio.h>
int main()
int main()
{
    int x,y,z,xy,mx;

    scanf("%d %d %d",&x,&y,&z);

    xy=(x+y+abs(x-y))/2;

    mx=(xy+z+abs(xy-z))/2;

    printf("%d eh o maior\n",mx);

}
