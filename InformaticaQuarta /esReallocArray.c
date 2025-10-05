#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int n = 0;
    int scelta = 0;
    int dim = 0;

    do {
        printf("Di quanto deve essere la dimensione dell'array? ");
        scanf("%d", &n);
    } while (n < 1);

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Errore di allocazione memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("inserisci elemento dell'array: ");
        scanf("%d", &array[i]);
    }

    printf("MENU\n");
    printf("scegli se aumentare la dimensione del vettore oppure no:\n");
    printf("1. Aumenta dimensione\n");
    printf("2. Non aumentare dimensione\n");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1: {
            do {
                printf("scegli di quanto deve essere la nuova dimensione dell'Array: ");
                scanf("%d", &dim);
            }while (dim < n);

            int *temp = realloc(array, dim * sizeof(int));
            if (temp == NULL) {
                printf("Errore di riallocazione\n");
                free(array);
                return 1;
            }
            array = temp;

            for (int i = n; i < dim; i++) {
                printf("inserisci un numero: ");
                scanf("%d", &array[i]);
            }

            for (int i = 0; i < dim; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        }
        case 2:
            for (int i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        default:
            printf("Scelta non valida, riprova\n");
    }

    free(array);
    return 0;
}
