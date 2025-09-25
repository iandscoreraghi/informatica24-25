#include <stdio.h>
#include <stdlib.h>

void espandiArray (int *array);
void visualizzaNumeri (int *array);
void cercaNumero (int *array);
void ordinaNumeri (int *array);

int main() {
    int *array;   
    int n=10; 
    int scelta=0;
    int val=0;

    array=(int*)malloc(n*sizeof(int));  

    
    for (int i=0; i<n; i++) {
        array[i]=val++;
    }
    for (int i=0; i<n; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    do {
        printf("Menu:\n");
        printf("1. Aggiungere un numero\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("0. Esci dal programma\n");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                espandiArray(array);
                break;
            case 2:
                visualizzaNumeri(array);
                break;
            case 3:
                cercaNumero(array);
                break;
            case 4:
                ordinaNumeri(array);
                break;
            case 5:
                break;
            case 0:
                printf("programma terminato");
                break;
            default:
                printf("Scelta non valida, riprova\n");
        }
    }while(scelta!=0);
    return 0;

}

void espandiArray(int *array){
    int dim=10+1;
    int num=0;
    
    for(int i=0; i<11; i++){
      array[i]= num++;
    }
    
    for (int i=0; i<11; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void visualizzaNumeri (int *array){
    for(int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
void cercaNumero(int *array){
    int num;
    int trovato=0;
    
    printf("Inserisci un numero: ");
    scanf("%d", &num);

    for (int i=0; i<10; i++) {
        if (array[i] == num) {
            printf("Numero %d trovato alla posizione %d\n", num, i);
            trovato = 1;
            break;
        }
    }

    if (trovato==0){
        printf("Numero non trovato\n");
    }
}
void ordinaNumeri(int *array){
    int temp;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}