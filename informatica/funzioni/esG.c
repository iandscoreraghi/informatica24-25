#include <stdio.h>
int somma (int _n1, int _n2);
int sottrazione (int _n1, int _n2);
int moltiplicazione (int _n1, int _n2);
void divisione (int _n1, int _n2);
int main(){
    
    int n1=0;
    int n2=0;
    int scelta=0;
    int somma2=0;
    int sottrazione2=0;
    int moltiplicazione2=0;
    
    do{
    printf("inserisci un numero1: ");
    scanf("%d", &n1);
    printf("inserisci un numero2: ");
    scanf("%d", &n2);
    }while(n1<0 || n2<0);
    
    printf("\nscegli un opzione da eseguire: ");
    printf("\n 0: fine");
    printf("\n 1: addizione");
    printf("\n 2: sottrazione");
    printf("\n 3: moltiplicazione");
    printf("\n 4: divisione");
    printf("\nscegli un calcolo da fare:");
    scanf("%d", &scelta);

    switch (scelta){
        case 0:
            printf("il programma termina: ");
            break;
        case 1:
            somma(n1, n2);
            somma2=somma(n1, n2);
            printf("Il risultato della somma è %d", somma2);
            break;
        case 2: 
            sottrazione(n1, n2);
            sottrazione2=sottrazione(n1, n2);
            printf("il risultato è %d", sottrazione2);
        case 3:
            moltiplicazione(n1, n2);
            moltiplicazione2=moltiplicazione(n1, n2);
            printf("il risultato della moltiplicazione è %d", moltiplicazione2);
            break;
        case 4:
            divisione (n1, n2);
            break;
            
        default:
            printf("hai inserito un opzione non valida:");
            break;
    }
   
}
int somma (int _n1, int _n2){
    int n3;
    n3=_n1+_n2;
    return(n3);
}
int sottrazione (int _n1, int _n2){
    int n3=0;
    n3=_n1-_n2;
    
    return(n3);
}
int moltiplicazione (int _n1, int _n2){
    int n3=0;
    n3=_n1*_n2;
    return(n3);
}
void divisione (int _n1, int _n2){
    float n3=0;
    n3=_n1/_n2;
    
    printf("Il risultato della divisione è %.2f", n3);
}
