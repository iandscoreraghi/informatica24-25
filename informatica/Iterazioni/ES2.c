#include <stdio.h>

int main(){
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d",&numero);

    while( numero!=0){
        printf("\nIl valore inseritop e: %d", numero);
        printf("Inserisci un numero: ");
        scanf("%d",&numero);
    }

}