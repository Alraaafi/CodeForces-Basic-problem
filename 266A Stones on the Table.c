#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    str[n]='\0';
    for(i=0; i<n-1; i++){
        if(str[i]==str[i+1]) c++;
    }
    printf("%d\n",c);
}
