#include<stdio.h>

int main(){
    int numero=0;
    int cnt=0;

    while(1){ 
        printf("Inserisci un numero: ");
        scanf("%d", &numero);

        if (numero==0)
            cnt++;

        if (numero%2 == 0) {
            if(numero==0) {
                continue;
            }
        else
            cnt++;
            printf("Hai inserito un numero pari!\n");
            printf("\n");
            break; 
        }

    }
        printf("Il numero di volte in cui è stato inserito un numero pari a 0 e' di %d volte", cnt);
        printf("\n\n");
}