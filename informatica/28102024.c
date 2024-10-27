#include <stdio.h>
int main(){
    
    int numero;
    int migliaia;
    int centinaia;
    int decine;
    int unita;
    int risultato=0;
    
    printf("Inserisci numero: ");
    scanf("%d", &numero);
    
    if(numero<0 || numero >= 10000){
        printf("Numero non valido, programma terminato");
    }
    migliaia= numero / 1000;
    centinaia= (numero - migliaia * 1000)/100;
    decine=(numero - migliaia * 1000 - centinaia * 100)/10;
    unita=(numero - migliaia * 1000 - centinaia * 100 - decine * 10);
    
    risultato=migliaia+centinaia+decine+unita;
    
    if(risultato%3==0){
        printf("Il numero è divisibile per 3\n");
    }
    else{
        printf("Il numero non è divisibile per 3\n");
    }
    return 0;

}
