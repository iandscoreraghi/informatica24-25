//leggi 3 valori e determina se seguono una progressione aritmetica

#include <stdio.h>

int main(){
    
    int num1=0;         //dichiaro le variabili che mi servono
    int num2=0;
    int num3=0;
    int differenza=0;
    
    printf("inserisci il primo numero:");   //tag di output e di input per potere inserire personalmente i numeri
    scanf("%d", &num1);
    printf("inserisci il secondo numero:");
    scanf("%d", &num2);
    printf("inserisci il terzo numero:");
    scanf("%d", &num3);
    printf("inserisci la differenza:");
    scanf("%d", &differenza);
    
    if(num1==num2-differenza && num2==num1+differenza && num3==num2+differenza){   //verifichiamo che i numeri seguano una distanza costante
        printf("i numeri seguono una progressione aritmetica costante");
    
} 
    else
        printf("i numeri non seguono una progressione aritmetica costante");
        
}