#include <stdio.h>

int main(){
    int n=8;
    int tot=0;
    int sum=0;

    for(int j=1; j<=12; j++){
    n+=1;
    n*n;
    sum+=n*n;
    }
    printf("la somma dei valori vale: %d", sum);
}