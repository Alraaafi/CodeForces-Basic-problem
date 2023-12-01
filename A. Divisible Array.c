#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,right=0,left=0;
    scanf("%d",&n);
    int mat[n][n],mat2[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           scanf("%d",&mat[i][j]);
        }
    }

        for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           if(j==i) right = right+mat[i][j];
        }
    }

        for(i=0; i<n; i++){
        for(j=0,k=n-1; j<n,k>=0; j++,k--){
           mat2[i][j]=mat[i][k];
        }
    }

        for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           if(j==i) left = left+mat2[i][j];
        }
    }

    int dif = right-left;
    if(dif>=0) printf("%d\n",dif);
    else {
    printf("%d\n",-1*dif);
    }

  return 0;
  //©Alraaafi
}
