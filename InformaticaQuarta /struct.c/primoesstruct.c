#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    char cognome[20];
    int eta;
}Persona;

int main(){
    Persona p1;
    Persona *p2;

    printf("inserisci il nome della persona: ");
    scanf("%s", p1.nome);
    fflush(stdin);
    printf("inserisci il cognome della persona: ");
    scanf("%s", p1.cognome);
    fflush(stdin);
    printf("inserisci età della persona: ");
    scanf("%d", &(p1.eta));
    fflush(stdin);

    printf("Ecco i dati della seguente persona: %s,  %s,  %d",p1.nome, p1.cognome, p1.eta);

    
}