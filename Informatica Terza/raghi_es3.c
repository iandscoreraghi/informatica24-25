#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1=0;
    int num2=0;
    int scelta=0;
    float somma_valore_assoluto;
    float differenza_tra_maggiore_e_minore;

    printf("inserisci il primo numero:");
    scanf("%d", &num1);
    printf("inserisci il secondo numero:");
    scanf("%d", &num2);

    printf("\n1 - somma valore assoluto\n");
    printf("\n2 - differenza tra maggiore e minore\n");
    printf("\n3 - quale valore si avvicina di piu\n");
    printf("\n4 - se un numero è multiplo dell'altro\n");
    printf("\n");
    
    printf("scelta");
    scanf("%d", &scelta);

     switch(scelta){
        case 1:{
            somma_valore_assoluto=num1+num2;
            printf("la somma vale:%d",differenza_tra_maggiore_e_minore);
            break;
    }
        case 2:{
            if(num1<num2);
            differenza_tra_maggiore_e_minore= num2-num1;
            printf("");
            

        }


}
