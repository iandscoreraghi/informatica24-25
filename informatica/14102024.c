#include <stdio.h>

int main(){

    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;

    //richiesta degli input 
    printf("inserisci il giorno:");
    scanf("%d", &giorno);
    printf("inserisci il mese:");
    scanf("%d", &mese);
    printf("inserisci l'anno:");
    scanf("%d", &anno);

    //controllo
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno%100==0){
        if(anno%400==0){
            printf("L'anno è bisestile:");
            bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("L'anno non è bisestile:");
            bisestile=1;

        }
    }
    //controllo del mese
    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("la data è accettabile:");
            }
        }
        else{
            if(giorno>=1 && giorno<=31){
                printf("\nLa data è accettabile");
            }
        }
    }
    int giorno1=0;
    int mese1=0;
    int anno1=0;
    int bisestile1=0;

    //richiesta degli input 
    printf("\ninserisci il giorno:");
    scanf("%d", &giorno1);
    printf("inserisci il mese:");
    scanf("%d", &mese1);
    printf("inserisci l'anno:");
    scanf("%d", &anno1);

    //controllo
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno1%100==0){
        if(anno1%400==0){
            printf("L'anno1 è bisestile:");
            bisestile=1;
        }
    }
    else{
        if(anno1%4==0){
            printf("L'anno1 non è bisestile:");
            bisestile=1;

        }
    }
    //controllo del mese
    if(mese1>=1 && mese1<=12){
        if(mese1==2){
            if(giorno1>=1 && giorno1<=28+bisestile1){
                printf("la data è accettabile:");
            }
        }
        else{
            if(giorno1>=1 && giorno1<=31){
                printf("\nLa data  non è accettabile");
            }
        }
    }
        if(anno>anno1){
            printf("\n anno è la data più recente");
         }
        else{
        if(anno<anno1){
            printf("\n anno1 è la data più recente");
        }

        }

        if(mese>mese1){
            printf("\n mese è la data più recente");

        }
        
        else{
        if(mese<mese1){
            printf("\n mese1 è la data più recente")
        }

        }
        {
        if("giorno>giorno1")
            printf("giorno è la data più recente")
        
        }

        else{
            if(giorno<giorno1)

            printf("giorno1 è la data più recente")
        }
}
