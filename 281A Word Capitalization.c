#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    gets(str);
    int len = strlen(str),i;
    str[len]='\0';
    if(str[0]>='a' && str[0]<='z')
        str[0] = str[0]-32;
     printf("%s\n",str);

//Alraaafi
}
