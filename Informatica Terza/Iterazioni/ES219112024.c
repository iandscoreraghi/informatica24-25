#include <stdio.h>

int main() {
    int numero = 0;
    int min;

    while (1) {
        printf("inserisci un numero: ");
        scanf("%d", &numero);

        if (numero == 0){ // lo 0 non è valido
            break;
        }

        if (numero < min){ //continua a sostituire nella variabile 'min' qualsiasi numero minore dell'ultima
            min = numero;
        }
    }

    if (min != 0){
        printf("Il numero minore è %d\n", min);
    }
    return 0;
}