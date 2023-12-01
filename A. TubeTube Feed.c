#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);

for(i=1; i<=N; i++){
    int n,t,j,inv=0,idx;
    scanf("%d %d",&n,&t);
    int num[n],val[n];
    for(j=0; j<n; j++) scanf("%d",&num[j]);
    for(j=0; j<n; j++) scanf("%d",&val[j]);

    for(j=0; j<n; j++){
        if(t>=num[j]) inv++;
    }

    for(j=0; j<n; j++) {
        if(t==num[j]){
            idx = j+1;
            break;
        }else{
            idx = j+1;
        }
        t--;
    }


    if(inv==0) printf("%d\n",-1);
    else printf("%d\n",idx);

}
  return 0;
  //©Alraaafi
}
