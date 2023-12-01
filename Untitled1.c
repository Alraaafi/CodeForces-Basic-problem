#include<stdio.h>
int main()
{
    int a,b,i,j,count=0;
    printf("Input range: ");
    scanf("%d %d",&a,&b);
    printf("The prime number between %d and %d are :",a,b);
    i=a;

    do{
        j=2;
        do{
            if(i%j==0)
            {
                count++;
                break ;
            }
            j++;
        }
        while(j<i);

        if(i==2) count=0;
        if(count==0 && i!=1) printf("%d ",i);
        count = 0;
        i++;
    }
    while(i<=b);
    return 0;
    //Md. Tanvir Ahmed
}
