#include<stdio.h>
int main(){
    int n,pos,i,loc,nums=0,same=0;
    scanf("%d %d",&n,&pos);
    int mem[n];
    for(i=0; i<n; i++){
        scanf("%d",&mem[i]);
    }

    loc = mem[pos-1];
    for(i=0; i<n; i++){
        if(mem[i]==loc) break;
        if(mem[i]>0){
            nums++;
        }
    }

        for(i=nums; i<n; i++){
            if(mem[i]==loc && mem[i]>0) {
                same++;
    }

                    }
    printf("%d\n",nums+same);

//Alraaafi
}
