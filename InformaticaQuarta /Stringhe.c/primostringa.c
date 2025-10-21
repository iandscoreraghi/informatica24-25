#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
void compatta(char* buffer, int len);
int conteggio(frase);

int main(){
    char buffer[200];
    String frase;

    printf("inserisci una stringa:");
    fgets(buffer, sizeof(buffer), stdin);
    int len= strlen(buffer);
    compatta(buffer,len);
    frase= (String)malloc((len+1)*sizeof(char));
    if(frase==NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);

    printf("Il numero delle vocali è: %d", conteggio(frase));
}
void compatta(char* buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1]= '\0';
        len--;
    }
}
int conteggio(frase){
    int i = 0;
    int cnt = 0;
    while (frase[i] != '\0') {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            cnt++;
            i++;
        }
    }
    return cnt;
}