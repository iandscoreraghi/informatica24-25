/*SCRIVERE UN PROGRAMMA IN LINGUAGGIO C CHE:
    1. ALLOCHI DINAMICAMENTE UN ARRAY INIZIALE DI N NUMERI
    2. INSERIMENTO DEI VALORI
    3. STAMPA ARRAY
    4. CALCOLI LA SOMMA DEGLI ELEMENTI MULTIPLI DI 3 
    5. CREIAMO UN NUOVO ARRAY CONTENENTE SOLO VALORI DISPARI*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array=NULL;
    int n=0;
    int sumd=0;
    int nd=0;
    
    do{
    printf("Di quanto deve essere la dimensione dell'array? ");
    scanf("%d", &n);
    }while(n<1);

    array=(int*)malloc(n*sizeof(int)); 
    
    for(int i=0; i<n; i++){
        printf("inserisci un valore: ");
        scanf("%d", &array[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d", &array[i]);
    }

    for(int i=0; i<n; i++){
        if(array[i]%3==0)
            sumd=sumd+array[i];
            nd++;
    }
    printf("la somma dei %d numeri dispari è %d", nd,sumd);

    
    
}
