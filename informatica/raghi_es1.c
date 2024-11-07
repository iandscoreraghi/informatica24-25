#include <stdio.h>

int main(){
    int num1=0;
    int valore_k=0;
    int decine=0;
    int unita=0;

    printf("inserisci valore di num1: ");
    scanf("%d", &num1);
    printf("inserisci valore k: ");
    scanf("%d", &valore_k);

    decine=num1/10;
    printf("\nle decine sono : %d", decine );
    unita=num1-decine*10;
    printf("\nle unita sono: %d", unita );

    //verifico se il k è presente 1 o più volte all'interno del mio numero
    
    if(valore_k==decine && valore_k==unita)
        printf("\nil valore di k è presente 2 volte all'interno del numero");
    
    else if(valore_k==decine || valore_k==unita){
        printf("\nil valore di k è presente 1 sola volta all'interno del numero");
    }
    else
    printf("\nil valore di k non è presente 0 volte");
}