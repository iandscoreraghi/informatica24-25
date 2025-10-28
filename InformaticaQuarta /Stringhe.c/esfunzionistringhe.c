#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[100];
    char stringa2[100];
    char copia[100];
    char carattere;
    int frequenza = 0;

    printf("Inserisci la prima stringa: ");
    fgets(stringa1, sizeof(stringa1), stdin);
    
    stringa1[strcspn(stringa1, "\n")] = '\0';

    printf("Inserisci la seconda stringa: ");
    fgets(stringa2, sizeof(stringa2), stdin);
    stringa2[strcspn(stringa2, "\n")] = '\0';

    
    printf("Lunghezza prima stringa: %zu\n", strlen(stringa1));
    printf("Lunghezza seconda stringa: %zu\n", strlen(stringa2));

    
    if (strcmp(stringa1, stringa2) == 0)
        printf("Le due stringhe sono uguali.\n");
    else
        printf("Le due stringhe sono diverse.\n");

    
    strcpy(copia, stringa1);
    printf("Copia della prima stringa: %s\n", copia);

    
    printf("Inserisci un carattere da cercare nella prima stringa: ");
    carattere = getchar();
    for (int i = 0; stringa1[i] != '\0'; i++) {
        if (stringa1[i] == carattere)
            frequenza++;
    }
    printf("Il carattere '%c' compare %d volte nella prima stringa.\n", carattere, frequenza);

    
    char concatenata[200];
    strcpy(concatenata, stringa1);
    strcat(concatenata, stringa2);
    printf("Stringa concatenata: %s\n", concatenata);
    if (strstr(stringa1, stringa2) != NULL)
        printf("La seconda stringa è contenuta nella prima.\n");
    else
        printf("La seconda stringa NON è contenuta nella prima.\n");

    return 0;
}
