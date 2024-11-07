#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int voto_computer=10;
    printf("voto computer: %d\n ", rand() %voto_computer);   
    int scelta=0;
    float voto_utente=0;
    float media=0;
    float voto_maggiore=0;
    float voto_minore=0;
    float voto_sufficiente=0;


    printf("inserisci voto utente: \n");
    scanf("%d", &voto_utente);

    if();
    printf("voto non valido");

    printf("\n1 - media.\n");
    printf("2 - voto_maggiore.\n");
    printf("3 - voto_minore.\n");
    printf("4 - voto_sufficiente.\n");
    printf("\n");
    
    printf("scelta");
    scanf("%d", &scelta);

    switch(scelta){
        case 1:{
            media=(voto_computer+voto_utente)/2;
            printf("la media è di: %f", media);
            break;
    }
        case 2:{
            if(voto_computer>voto_utente)
            printf("il voto computer è maggiore del voto utente");
            else
            printf("il voto utente è maggiore del voto computer");
            break;
    }
        case 3:{
            if(voto_computer<voto_utente)
            printf("il voto computer è minore del voto utente");
            else 
            printf("il voto utente è minore del voto computer");
            break;
    }
        case 4:{
            if(voto_computer>=6)
            printf("il voto del computer è sufficiente");
            else if(voto_utente>=6)
            printf("il voto utente è sufficiente");
            else
            printf("sono entrambi sufficienti");
            break;
            }
            

    }
        return 0;
        }


