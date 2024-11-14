#include <stdio.h>

int main(){
    int num1, num2, num3, num4, num5;     //5 variabili 
    int cnt=0;                            //variabile contatore inizializzata a 0

    while(cnt<5){
        printf("\ninserisci un numero");
        scanf("%d", &num1);
        cnt++;//cnt=cnt+1;
        printf("\nil valore inserito e: %d\n", num1);

    }

}