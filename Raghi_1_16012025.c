#include <stdio.h>

int main(){
    int sum=0;

    for(int i=1; i<=500; i++){
        sum=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                sum+=j;
            }

        }
        if(sum==i+1){
            printf("%d\t", i);
        }
    }
}