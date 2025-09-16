#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DIM 5 

int main(){
    int vett[DIM];
    int scelta;

    printf("MENU");
    printf("\n1  Carica vettore");
    printf("\n2  stampa vettore");
    printf("\n3  ordina vettore con bubble sort");
    printf("\n  0 per uscire");
    scanf("%d", &scelta);

    do{
    switch (scelta){
        case 1:{
            caricaVett(vett, DIM);
            break;
        }
        case 2:{
            stampaVett(vett, DIM);
            break;
        }
        case 3:{
            caricaBubble(vett, DIM){
                
            }
            break;
        }
            default:
            break;
    }
    }while();
        
}