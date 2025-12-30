/*Registrare le informazioni di alcuni libri
titolo, autore, anno pubblicazione
array di libri 
caricare l'array
visualizzare
rimuovere un libro.
*/
#include <stdio.h>
#include <stdlib.h>

void inserisciLibri(libro *l, int n);

typedef struct{
    char titolo[25];
    char autore[20];
    int annoPubblicazione;
}libro;
int main(){
    int scelta=0;
    int n;
    libro *l;
    
    do{
    printf("MENU\n");
    printf("1. inserire un libro\n");
    printf("2. visualizzare il libro\n");
    printf("3. eliminare un libro\n");
    printf("4. cerca libro da titolo\n");
    printf("che cosa vuoi fare?\n");
    scanf("%d", &scelta);
    }while(scelta<0 || scelta>4 || scelta!=0);

    return 0;

    switch(case){
        case 1:
            inserisciLibri(l ,n);
            break;
    }

}
void inserisciLibri(libro *l, int n){
        scanf("%s", l[i].titolo);
        printf("inserisci l'autore del libro: ");
        scanf("%s", l[i].autore);
        printf("inserisci l'anno di pubblicazione: ");
        scanf("%d", &l[i].annoPubblicazione);
}