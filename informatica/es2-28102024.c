#include <stdio.h>
#include <time.h>


int main(){
    float num1=0;
    float num2=0;
    int scelta;

    printf("---scegli dal menu l'operazione da fare---");
    printf("\n 0. termina");
    printf("\n 1. somma");
    printf("\n 2. differenza");
    printf("\n 3. divisione");
    printf("\n 4. moltiplicazione");

    printf("\nscegli l'operazione da eseguire: ");
    scanf("%d", &scelta);
    srand(time(NULL));
    num1=rand()%50+1;
    num2=rand()%50+1;

    switch (scelta){
        case 0:
            printf("il programma termina ");
            break;
        case 1:
            printf("la somma vale: %.2f", num1+num2);
            break;
        case 2:
            printf("la differenza vale: %.2f", num1-num2);
            break;
        case 3:
            printf("la divisione vale: %.2f", num1/num2);
            break;
        case 4:
            printf("la moltiplicazione vale: %.2f", num1*num2);
            break;
        default:
            printf("hai inserito una scelta non valida");
            break;
        
    }     
    return 0;
}