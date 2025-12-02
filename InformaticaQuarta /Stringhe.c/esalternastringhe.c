#include <stdio.h>
#include <string.h>

void alternaStringhe(char *s1, char *s2, char*s3) {
    int i = 0, j = 0, k = 0;
    int lunghezza1 = strlen(s1);
    int lunghezza2 = strlen(s2);

    while (i<lunghezza1 || j<lunghezza2) {
        if (i<lunghezza1) {
            s3[k]= s1[i];
            k++;
            i++;
        }
        if (j < lunghezza2) {
            s3[k] = s2[j];
            k++;
            j++;
        }
    }
    s3[k]='\0';
}

int main() {
    char buffer[200];
    char buffer1[200];
    char s3[400];

    printf("Inserisci stringa 1: ");
    fgets(buffer, 200, stdin);

    printf("Inserisci stringa 2: ");
    fgets(buffer1, 200, stdin);
    

    alternaStringhe(buffer, buffer1, s3);

    printf("Stringa combinata: %s", s3);

    return 0;
}
