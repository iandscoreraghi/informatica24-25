#include <stdio.h>

int main(){
    int numero;
    int cntPari=0;
    int cntDispari=0;

    while( numero!=0){
        printf("Inserisci un numero: ");
        scanf("%d",&numero);
        
        /*if(numero==0)    //condizione per gestire gli zeri ed evitare
            continue;      //che vengano conteggiati con i numeri pari
        */
        if(numero%2==0){
            cntPari++;
        }
        else
            cntDispari++;
        
    }
    printf("\n\n");
    printf("I numeri pari sono %d\n", cntPari);
    printf("I numeri dispari sono %d\n", cntDispari);

}