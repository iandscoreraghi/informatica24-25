#include <stdio.h>

int main(){
    int numero=0;
    int numero2=0;
    int cnt=0;

        printf("inserisci un numero:");
        scanf("%d", &numero);

    do{
        printf("inserisci numero:");
        scanf("%d", &numero2);
        if(numero2%2==0 && numero2<numero && numero2!=0)
        cnt++;
    }while(numero2!=0);
        printf("il numero di valori inseriti minori e pari al primo numero e/' %d", cnt);
        

}