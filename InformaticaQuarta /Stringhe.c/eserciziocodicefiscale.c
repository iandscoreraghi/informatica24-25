#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
String calcolaLettereCognome(String snome);

int main(){

    char buffer[50];  
    String snome=buffer;
    String scognome=buffer;
    int annoNascita=0;
    String smeseNascita=buffer;
    int mese=0;
    int giorno=0;
    String comuneNascita= "G186";
    

    printf("inserisci nome: ");
    fgets(buffer, 50, stdin);
    snome=buffer;
    printf("nome: %s", snome);

    printf("inserisci cognome: ");
    fgets(buffer, 50, stdin);
    scognome=buffer;
    printf("cognome: %s", scognome);

    do{
    printf("inserisci anno di nascita: ");
    scanf("%d", &annoNascita);
    }while(annoNascita<1000 || annoNascita>2025);

    do{
    printf("inserisci il mese: ");
    scanf("%d", &mese);
    }while(mese<1 || mese >12);

    if(mese>=1 && mese<=12)
        if(mese==1){
            smeseNascita= "gennaio";
            printf("%s", smeseNascita);
        }
        else if(mese==2){
            smeseNascita= "febbraio";
            printf("%s", smeseNascita);
        }
        else if(mese==3){
            smeseNascita= "marzo";
            printf("%s", smeseNascita);
        }
        else if(mese==4){
            smeseNascita= "aprile";
            printf("%s", smeseNascita);
        }
        else if(mese==5){
            smeseNascita= "maggio";
            printf("%s", smeseNascita);
        }
        else if(mese==6){
            smeseNascita= "giugno";
            printf("%s", smeseNascita);
        }
        else if(mese==7){
            smeseNascita= "luglio";
            printf("%s", smeseNascita);
        }
        else if(mese==8){
            smeseNascita= "agosto";
            printf("%s", smeseNascita);
        }
        else if(mese==9){
            smeseNascita= "settembre";
            printf("%s", smeseNascita);
        }
        else if(mese==10){
            smeseNascita= "ottobre";
            printf("%s", smeseNascita);
        }
        else if(mese==11){
            smeseNascita= "novembre";
            printf("%s", smeseNascita);
        }
        else if(mese==12){
            smeseNascita= "dicembre";
            printf("%s", smeseNascita);
        }else
            printf("non hai inserito un mese corretto");

        do{
        printf("\ninserisci il giorno del mese in cui sei nato:");
        scanf("%d", &giorno);
        }while(giorno<1 || giorno>31);

        printf("comune di nascita: %s", comuneNascita);

        calcolaLettereCognome(snome);

    return 0;
}
String calcolaLettereCognome(String snome){
    int i=0;
    while(snome[i] != '\n' || snome[i] != '/0'){
        i++;
    }

}



