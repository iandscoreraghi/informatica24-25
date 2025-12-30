#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    char colore[20];
    int punteggio;
}Squadra;

void stampa(Squadra *teams, int n){
    int i;
    for(int i=0; i<n; i++){
        printf("nome squadra: %s\n", teams[i].nome);
        printf("colore squadra: %s\n", teams[i].colore);
        printf("punteggio squadra: %s\n", teams[i].punteggio);
    }
}
int main(){
    Squadra *teams;
    int n;

    do{
        printf("inserisci il numero delle squadre(max 10): ");
        scanf("%d", &n);
    }while(n<0 || n>10);

    teams = (struct squadra*)malloc(sizeof(Squadra));

    if (teams==NULL){
        printf("Errore durante l'allocazione");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("inserisci il nome della squadra: ");
        scanf("%s",teams[i]->nome);

        printf("inserisci il colore della squadra: ");
        scanf("%s",teams[i]->);
        printf("inserisci il punteggio della squadra: ");
        scanf("%s",teams[i]->colore);

    }
}