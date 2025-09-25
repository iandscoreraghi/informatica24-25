/*creare un array dinamico chiedendo all'utente la sua dimensione 
il programma prevede le seguenti funzioni
Funzioni:
1.CREARE ARRAY
2.INSERISCI ELEMENTI NELL'ARRAY
3.STAMPA DEI VALORI
4.ESCI*/

#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _num);
int* inserisciValori(int *_array, int _num);

int main(){
    int *array=NULL;
    int num=0;

    do{
    printf("scegli la dimensione dell'ARRAY: ");
    }while(num<1);

    array= creaVett(num);
    array= inserisciValori(array, num);
    stampaVett(array, num);

    free(array);
}
int* creaVett(int _n){

    int *_array=(int*)malloc(_n *sizeof(int));

    if(_array==NULL){
        printf("Errore durante l'allocazione dell'array");
        return 1;
    }
    return _array;
}
int* inserisciValori(int *_array, int _num){
    for(int i=0; i<_num; i++){
        printf("inserisci un numero: ");
        scanf("%d", &_array[i]);
    }
    return _array;
}

