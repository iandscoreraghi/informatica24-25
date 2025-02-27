#include <stdio.h>

int main(){
    int n=0;
    int val=1;

    printf("inserisci un numero: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("\n");
        for(int j=1; j<=i; j++){
            printf("%d ", val);
            val+=1;
        }
    }
}