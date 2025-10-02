#include <stdio.h>
#include <stdlib.h>


int main(){


    int *array=NULL;
    int n=0;
    int scelta=0;
    int dim=0;

    do{
    printf("Di quanto deve essere la dimensione dell'array? ");
    scanf("%d", &n);
    }while(n<1);

    array=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("inserisci elemento dell'array: ");
        scanf("%d", &array[i]);
    }
        printf("MENU");
        printf("scegli se aumentare la dimensione del vettore oppure no:\n");
        printf("1. Aumenta dimensione\n");
        printf("2. Non aumentare dimensione \n");
        scanf("%d", &scelta);

    switch(scelta){
            case 1:
            do{
                printf("scegli di quanto deve essere la nuova dimensione dell'Array: ");
                scanf("%d", &dim);
            }while(dim<n);
                break;
            case 2:
                break;
            default:
                printf("Scelta non valida, riprova\n");
        }
    printf("....");
}