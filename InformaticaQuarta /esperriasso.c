/*#include <stdio.h>
#define DIM 6

void riempiVett( int vett[], int dim);
void stampaVett( int vett[], int dim);
int calcolaIndici( int vett[], int dim );

int main() {

	int vett[6];
	riempiVett(vett, 6);
	stampaVett(vett, 6);
	int numeroIndici=calcolaIndici(vett, 6);
	printf("%d",numeroIndici);

}
void riempiVett( int vett[], int dim) {
	for(int i=0; i<dim; i++) {
		vett[i]=i*2;
	}
}
void stampaVett( int vett[], int dim) {
	for(int i=0; i<dim; i++) {
		printf("%d ", vett[i]);
	}
	printf("\n");
}
int calcolaIndici( int vett[], int dim ) {
	int val=0;
	for(int i=0; i<dim; i++) {
		val+=i;
	}
	return (val);
}
scrivi un programma in c che gestisca un insieme di numeri interi
usando un array dinamico.
Il programma deve permettere, tramite menu:
1.aggiungere un numero espandendo l'array con realloc/
2.visualizzare tutti i numeri
3.cercare un numero specifico
4.ordinare i numeri in ordine crescente 
5.eliminare un numero scelto
6.uscire*/


#include <stdio.h>
#include <stdlib.h>

void espandiArray(int vett[], int dim);

int main(){
    
    int *vett=NULL;
    int vettN=0;
    printf("inserisci dimensione dell'array: ");
    scanf("%d", &vettN);
    
    vett=(int*)malloc(vettN*sizeof(int));
    
    if(malloc!=NULL)
        printf("allocazione riuscita\n");
    else
        printf("ìerrore di allocazione\n");
    
    espandiArray(vett, vettN);
    
}
void espandiArray(int vett[], int dim){
    
}