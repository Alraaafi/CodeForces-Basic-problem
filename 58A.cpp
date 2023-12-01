#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char tw[101],ck[6]="hello";
    int i,j,m=0;
    scanf("%s",tw);

    j=0;
    for(i=0; i<strlen(ck); i++)
    {
        m = 0 ;
        for( ;j<strlen(tw); j++)
        {
            m = 0 ;
            if(ck[i]==tw[j])
            {
                m++;
                //printf("%c\n",tw[j]);
                //printf("%d\n\n\n",j);
                break;
            }
            //printf("\twhy-%c,%d\n",ck[i],i);
        }
        //printf("\twhy-%c,%d\n",ck[i],i);

        j++;
        //if(m==0)
            //break;
    }
    if(m==0)
        printf("NO\n");
    else
        printf("YES\n");

    //©Alraaafi
}
