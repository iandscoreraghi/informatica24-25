#include <stdio.h> 
#include <string.h>

typedef struct canzoni{
    char titolo[50];
    char artista[50];
    int durata; 
}canzoni;

typedef struct playlist{
    canzoni* head;
    int lunghezza;
}playlist;

void menu(){
    printf("1) Stampa a video tutti i campi della canzone\n");
    printf("2) Chiede all’utente i dati della canzone (tranne l’ID, che viene generato dal programma)\n");
    printf("3) Crea e inizializza una lista lineare vuota di canzoni\n");
    printf("4) Stampa tutti gli elementi della lista delle canzoni disponibili\n");
    printf("5) Crea una nuova canzone tramite set_canzone() e la inserisce in testa alla lista\n");
    printf("6) Cerca e stampa tutte le canzoni dell’artista indicato\n");
    printf("7) Libera correttamente la memoria di tutte le canzoni nella lista\n");
    printf("8) Chiede all’utente un ID. Se esiste una canzone con quell’ID nella lista delle canzoni disponibili, la aggiunge in fondo alla playlist circolare\n");
    printf("9)  Stampa tutti gli elementi della playlist, facendo attenzione alla natura circolare della lista\n");
    printf("10) Chiede un ID all’utente e, se presente nella playlist, lo rimuove correttamente dalla lista circolare\n");
}


int main(){
    
}