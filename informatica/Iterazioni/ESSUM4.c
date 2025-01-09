/* DATI N NUMERI, SOMMARLI 4 A 4
    TERMIA IL PROGRAMMA NON APPENA SI INTRODUCE UNO 0
*/

#include <stdio.h>

int main(){
    int num;
    int somma=0;
    int conta=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
        somma=num+somma;
        conta++;
    }while(num!=0);

}