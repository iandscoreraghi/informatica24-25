#include <stdio.h>

int main(){
    int numero;
    int cnt=1;

    printf("Inserisci un numero: ");
    scanf("%d",&numero);
    

    while( numero!=0){
        printf("\nIl valore inseritop e: %d", numero);
        printf("Inserisci un numero: ");
        scanf("%d",&numero);
        cnt++;
    }
    printf("Hai inserito %d valori", cnt);

}