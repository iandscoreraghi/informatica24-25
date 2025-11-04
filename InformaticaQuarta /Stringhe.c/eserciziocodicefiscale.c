#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int main(){

    char buffer[50];  
    String snome=buffer;
    String scognome=buffer;
    int annoNascita=0;
    String smeseNascita=buffer;
    int mese=0;
    

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
        if(mese=1)
            smeseNascita= "gennaio";
            printf("%s", smeseNascita);
    
    return 0;
}


