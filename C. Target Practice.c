#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);


    while(t--)
    {
        //scanf("%d",&n);
        int c=0,i,j,x,y;
        char ch[11];

        for(i=1; i<=10; i++)
        {
            scanf("%s",&ch);
            for(j=0; j<10; j++)
            {

                if(ch[j]=='X')
                {
                    //x = i>=j? j : i;
                    if(i==10) x = 1;
                    if(i==9) x = 2;
                    if(i==8) x = 3;
                    if(i==7) x = 4;
                    if(i==6) x = 5;

                    if(i==1) x = 1;
                    if(i==2) x = 2;
                    if(i==3) x = 3;
                    if(i==4) x = 4;
                    if(i==5) x = 5;

                    if(j==9) y = 1;
                    if(j==8) y = 2;
                    if(j==7) y = 3;
                    if(j==6) y = 4;
                    if(j==5) y = 5;

                    if(j==0) y = 1;
                    if(j==1) y = 2;
                    if(j==2) y = 3;
                    if(j==3) y = 4;
                    if(j==4) y = 5;


                    if(x>=y )
                        c = c + y;
                    else
                        c = c + x;
                }
            }
        }



        printf("%d\n",c);

        //fflush(stdin);


    }
}
