#include<stdio.h>
#include<string.h>
int main(){
    int N,i,ln;
    char word[100];
    scanf("%d",&N);

    for(i=1; i<=N; i++){
        scanf("%s",word);
        ln = strlen(word);
        if(ln<=10) printf("%s\n",word);
        else{
            printf("%c%d%c\n",word[0],ln-2,word[ln-1]);
        }
    }

  return 0;
  //©Alraaafi
}
