#include<stdio.h>
int main(){
    int t,n,i,j,m,k,s=0,com,d=0;
    scanf("%d",&t);

for(i=1; i<=t; i++){
    scanf("%d %d",&n,&k);
    int a[n];
    int b[n];
    for(j=0; j<n; j++){
        a[j]=1;
    }

        for(m=0; m<n; m++){
           a[m] = -1;
           for(j=0; j<n; j++){
            if(a[m]*a[j]==1) {
                d++;
            }
            b[j] = a[j];
            //printf("%d ",a[j]);
            if(s==n) s=0;
            s++;
           }
           if(d==k) break;
           d = 0 ;
           }

           if(d==k){
            printf("YES\n");
            for(j=0; j<n; j++) printf("%d ",b[j]);
           }else printf("NO\n");


}


  return 0;
  //©Alraaafi
}
