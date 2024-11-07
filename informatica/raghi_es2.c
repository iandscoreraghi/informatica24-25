#include <stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &num1);

    if(num1>200){
        printf("il primo numero è sufficiente");
    }
    else
        printf("inserisci un altro numero");
        scanf("%d", &num2);

    if(num1+num2>200){
        printf("la somma tra i due numeri è sufficiente");
    }
    else
        printf("\ninserisci un altro numero");
        scanf("%d", &num3);
    

    if(num1+num2+num3>200){
        printf("la somma tra i tre numeri è sufficiente");
    }
    else
        printf("inserisci un altro numero");
        scanf("%d", &num4);

}