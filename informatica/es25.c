#include <stdio.h>

int main() {
    int scelta;
    int n1, n2;
    int somma, moltiplicazione, sottrazione;
    float divisione;

    printf("1 - Somma.\n");
    printf("2 - Sottrazione.\n");
    printf("3 - Divisione.\n");
    printf("4 - Moltiplicazione.\n");
    printf("\n");

    printf("Scelta: ");
    scanf("%d", &scelta);
    
    switch (scelta) {
        case 1: {
            printf("Inserisci numero uno: ");
            scanf("%d", &n1);
            printf("Inserisci numero due: ");
            scanf("%d", &n2);
            somma = n1 + n2;
            printf("La somma è: %d\n", somma);
            break;
        }
        case 2: {
            printf("Inserisci numero uno: ");
            scanf("%d", &n1);
            printf("Inserisci numero due: ");
            scanf("%d", &n2);
            sottrazione = n1 - n2;
            printf("La sottrazione è: %d\n", sottrazione);
            break; // Aggiunto break
        }
        case 3: {
            printf("Inserisci numero uno: ");
            scanf("%d", &n1);
            printf("Inserisci numero due: ");
            scanf("%d", &n2);
            if(n2 != 0) { // Controllo per evitare divisione per zero
                divisione = (float)n1 / n2;
                printf("La divisione è: %f\n", divisione);
            } else {
                printf("Errore: divisione per zero non permessa.\n");
            }
            break;
        }
        case 4: {
            printf("Inserisci numero uno: ");
            scanf("%d", &n1);
            printf("Inserisci numero due: ");
            scanf("%d", &n2);
            moltiplicazione = n1 * n2;
            printf("La moltiplicazione è: %d\n", moltiplicazione);
            break;
        }

    }
    return 0; // Aggiunta la restituzione di 0 dal main
}