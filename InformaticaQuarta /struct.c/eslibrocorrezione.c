/*Registrare le informazioni di alcuni libri con 
titolo, autore, anno e prezzo.
Determinare il libro più costoso e il più vecchio
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Libro{
    char titolo[40];
    char autore[20];
    int anno;
    float prezzo;
};

int main(){
    struct Libro *libri;

    int n=3;

    libri= (struct Libro*)malloc(n* sizeof(struct Libro));
    if(libri==NULL){
        printf("spazio insufficiente");
        return 1;
    }

    strcpy(libri[0].titolo, "Tom Sawyer");
    strcpy(libri[0].autore, "Marc Twain");
    libri[0].anno = 2000;
    libri[0].prezzo= 25;

    strcpy(libri[1].titolo, "Tom Lawyer");
    strcpy(libri[01].autore, "Marc Dwain");
    libri[1].anno = 2003;
    libri[1].prezzo= 35;

    strcpy(libri[2].titolo, "Tom Tawyer");
    strcpy(libri[2].autore, "Marc Lwain");
    libri[2].anno = 2008;
    libri[2].prezzo= 17;

    n=n+1;
    libri= (struct Libro*)realloc(libri, n* sizeof(struct Libro));
    if(libri==NULL){
        printf("spazio insufficiente");
        return 1;
    }

    strcpy(libri[3].titolo, "Tom Sawyer");
    strcpy(libri[3].autore, "Marc Twain");
    libri[3].anno = 2010;
    libri[3].prezzo= 21;

    printf("---lista dei libri---");
    for (int i=0; i<n; i++){
        printf("Libro %d: \n", i+1);
        printf("Titolo: %s \n", libri[i].titolo);
        printf("Titolo: %s \n", libri[i].autore);
        printf("Titolo: %d \n", libri[i].anno);
        printf("Titolo: %.2f \n", libri[i].prezzo);
    }

    int datato= libri[0].anno;
    int i_datato=0;
    for(int i=1; i<n; i++){
        if(libri[i].anno< datato)
        {datato=libri[i].anno;
        i_datato=i;
        }
    }
    printf("il libro %d è il più datato: %s",i_datato, libri[i_datato].titolo);

    float costoso= libri[0].prezzo;
    int i_costoso=0;
    for(int i=1; i<n; i++){
        if(libri[i].prezzo< costoso)
        {costoso=libri[i].prezzo;
        i_costoso=i;
        }
    }
    printf("il libro %d è il più costoso: %s",i_costoso, libri[i_costoso].titolo);

    printf("inserisci il titolo del libro che vuoi eliminare: ");
    fgets(libro, 50, stdin );
    int lun= strlen(libro);
    compatta(libro, lun);
    for (int i=0; i<n; i++){
        if(!(strcmp(libri[i].titolo, libro))){
            for(j=i; j<(n-1); j++){
                strcpy(libri[j].titolo, libro[j+1].titolo);
                strcpy(libri[j].autore, libro[j+1].autore);
                libri[j].anno=libri[j+1].anno;
                libri[j].prezzo=libri[j+1].prezzo;
            }
        }
    }

}
