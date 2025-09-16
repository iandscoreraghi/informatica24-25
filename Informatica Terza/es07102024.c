#include <stdio.h>
int main(){
    //6372
    int numero;
    int migliaia;
    int centinaia;
    int decine;
    int unita;
    
    printf("inserisci numero: ");
    scanf("%d", &numero);
    
    if(numero<0 || numero >= 10000)
        printf("Numero non valido, programma terminato");

    migliaia= numero / 1000;
    centinaia= (numero - migliaia * 1000)/100;
    decine=(numero - migliaia * 1000 - centinaia * 100)/10;
    unita=(numero - migliaia * 1000 - centinaia * 100 - decine * 10);
    
    printf("Le migliaia sono: %d\n", migliaia);
    printf("Le centinaia sono: %d\n", centinaia);
    printf("Le decine sono: %d\n", decine);
    printf("Le unita sono: %d\n", unita);
    
    return 0;

}



 






