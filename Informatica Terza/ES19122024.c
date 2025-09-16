/*dato un numero n calcolare il suo quadrato
sommando i primi n numeri dispari.
es: n=7 7^2=49
1 3 5 7 9 11 13 */
#include <stdio.h>

int main(){
    int n=0;
    int sum=1;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    while(sum<n*n){
        sum+=2;
        
    }
    
    printf("la somma finale vale %d", sum);

    }