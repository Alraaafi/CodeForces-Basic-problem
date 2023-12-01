#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j,d,c=0;
    char m[101];
    scanf("%s",m);
    l = strlen(m);
    m[l]='\0';
    for(i=0; i<l; i++)
    {
        d = 0;
        for(j=0; j<i; j++)
        {
            if(m[j]==m[i])
            {
               d++;
            }
            if(d==0) c++;
        }
    }
    if(c%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
}

