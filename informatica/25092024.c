// commento su una riga
/* ESERCIZIO
	scrivere il doppio di un numero
	fornito daq tastiera
*/
#include <stdio.h>

int main(){
	int n, doppio; //dichiarazione

	n=0;	//inizializzazione
	doppio=0;
	
	printf("inserisci un numero: ");
	scanf("%d",&n);
	doppio=n*2;
	printf("il doppio vale: %d", doppio);
	


}