#include <stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int media=0;

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
    
    if(num1+num2+num3+num4>200){
        printf("la somma tra i 4 numeri è sufficiente");
    }
    else
        printf("la somma tra i 4 numeri non è sufficiente");
    
    //calcolo la media

    if(num1>200){
        media=num1;
        printf("la media vale: %d", media);
    }
    else 
         printf("la media non è disponibile");

    if(num1+num2>200){
        media=(num1+num2)/2;
        printf("la media vale: %d", media);
    }
    else 
         printf("la media non è disponibile");

    if(num1+num2+num3>200){
        media=(num1+num2+num3)/3;
        printf("la media vale: %d", media);
    }
    else 
         printf("la media non è disponibile");
    
    if(num1+num2+num3+num4>200){
        media=(num1+num2+num3+num4)/4;
        printf("la media vale: %d", media);
    }
    else 
         printf("la media non è disponibile");


}