#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* String;

char* capovolgiStringa(char* buffer, int lunghezza);
int main(){
    char buffer[50];
    char s1=buffer;

    printf("inserisci la stringa: ");
    fgets(buffer, 50, stdin);
    printf("la tua stringa inserita è: %s", buffer);
    int lunghezza=strlen(buffer);
    printf("lunghezza=%d", lunghezza);
    capovolgiStringa(buffer,lunghezza);
    printf("la stringa modificata è: %s", buffer);
}
char* capovolgiStringa(char* buffer, int lunghezza){
    int temp=0;
    for(int i=0; i<lunghezza/2; i++){
        temp=buffer[i];
        buffer[i]=buffer[lunghezza-2-i];
        buffer[lunghezza-2-i]=temp;
    }
    return buffer;
}
