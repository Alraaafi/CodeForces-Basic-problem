#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    gets(str);
    int len = strlen(str),a1,a2,a3,i;
    str[len]='\0';
    a1=a2=a3=0;
    for(i=0; i<len; i++){
        if(str[i]=='1') a1++;
        if(str[i]=='2') a2++;
        if(str[i]=='3') a3++;
    }

    for(i=0; i<(len/2)+1; i++){

        if(a1>0){
            printf("1");
            a1--;
        }
        else if(a2>0){
            printf("2");
            a2--;
        }
        else if(a3>0){
            printf("3");
            a3--;
        }
        if(i==(len/2)) break;
        printf("+");
    }

     printf("\n");

//Alraaafi
}
