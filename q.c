#include <stdio.h>

int isPerfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return 1;
    } 
    else{
        return 0;
    }
}

int main(){
    int count=0;
    for(int n=1;n<1001;n++){ 
        if(isPerfect(n)){
            count++;
            printf("%d/ 1",count);
            for(int i=2;i<=n/2;i++){
                if(n%i==0){
                    printf(" + %d",i);
                }
            }
            printf(" = %d\n",n);
        }   
    }
    printf("\nthere are %d perfect numbers btw 1 and 1000\n",count);
}