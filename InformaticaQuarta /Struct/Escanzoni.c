#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ---- Definizione struct necessarie ---- */
typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;

/* ---- Variabile globale per gestire l'id univoco delle canzoni ---- */
int id_univoco = 0;

/* ---- Funzioni lista di canzoni disponibili ---- */
void stampa_canzone(Canzone *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);

/* ---- Funzioni playlist (lista circolare) ---- */
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);

/* ---- MAIN ---- */

int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar(); // pulisci buffer input

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    libera_memoria(playlist);
    return 0;
}

/* =======================================================================================
   Qui sotto vanno implementate le funzioni.
======================================================================================= */

void stampa_canzone(Canzone *c) {
    printf("ID: %d\n", c->id);
    printf("Titolo: %s\n", c->titolo);
    printf("Artista: %s\n", c->artista);
    printf("Durata: %d secondi\n", c->durata);
    
}

void set_canzone(Canzone *c) {
    // TODO
    printf("Inserisci titolo canzone: ");
    fgets(c->titolo, 50, stdin);
    c->titolo[strcspn(c->titolo, "\n")] = 0; 
    printf("Inserisci artista: ");
    fgets(c->artista, 50, stdin);
    c->artista[strcspn(c->artista, "\n")] = 0; 
    printf("Inserisci durata (in secondi): ");
    scanf("%d", &c->durata);
    getchar();
    c->id = id_univoco++;
}

Lista* crea_lista() {
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l->testa = NULL;
    l->lunghezza = 0;
    return l;
}

void stampa_lista(Lista *l) {
    Canzone* corrente = l->testa;
    while (corrente != NULL) {
        stampa_canzone(corrente);
        corrente = corrente->next;
    }
}

void inserisci_canzone_lista(Lista *l) {
    Canzone* nuova = (Canzone*)malloc(sizeof(Canzone));
    set_canzone(nuova);
    nuova->next = l->testa;
    l->testa = nuova;
    l->lunghezza++;

}

void ricerca_canzone_artista(Lista *l, char* artista) {
    Canzone* corrente = l->testa;
    while (corrente != NULL) {
        if (strcmp(corrente->artista, artista) == 0) {
            stampa_canzone(corrente);
        }
        corrente = corrente->next;
    }
}

void libera_memoria(Lista* l) {
    Canzone* corrente = l->testa;
    while (corrente != NULL) {
        Canzone* temp = corrente;
        corrente = corrente->next;
        free(temp);
    }
    free(l);

}

void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist) {
    /*lista circolare*/
    if (lista_canzoni->testa == NULL) {
        printf("La lista delle canzoni e' vuota.\n");
        return; 
    }
}

void stampa_playlist(Lista* playlist) {
    Canzone* corrente = playlist->testa;
    while (corrente != NULL) {
        stampa_canzone(corrente);
        corrente = corrente->next;
    }
}

void cancella_canzone_playlist(Lista *playlist) {
    Canzone* corrente = playlist->testa;
    while (corrente != NULL) {
        Canzone* temp = corrente;
        corrente = corrente->next;
        free(temp);
    }
    free(playlist);
}