//verifico se 3 numeri dati dall'utente possono essere letti come lati di un triangolo

#include <stdio.h>

int main(){
    
    int lato1=0;                //inserisco le variabili che mi servono
    int lato2=0;
    int lato3=0;
    
    
    printf("inserisci il valore del primo lato:");
    scanf("%d", &lato1);
    printf("inserisci il valore del secondo lato:");
    scanf("%d", &lato2);
    printf("inserisci il valore del terzo lato:");
    scanf("%d", &lato3);
    
    if(lato1+lato2>lato3 || lato2+lato3>lato1 || lato3+lato1>lato2){
        printf("i numeri possono essere letti come lati di un triangolo:");
        
    }
    else
        printf("i numeri non possono essere letti come lati di un triangolo:");
}