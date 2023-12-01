#include<stdio.h>
#include<string.h>
int main(){
    char str[101],str1[202];
    gets(str);
    strlwr(str);
    int i,l=0,len = strlen(str);
    str[len]='\0';
    for(i=0; i<len; i++){
        if(str[i]=='y' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            continue;
        str1[l]='.';
        l++;
        str1[l]=str[i];
        l++;
    }
    str1[l]='\0';
    printf("%s",str1);
}

