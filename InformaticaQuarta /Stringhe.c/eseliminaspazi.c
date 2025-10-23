#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;
void compatta(char* buffer, int* len);
int contaSpazi(char* buffer, int len);
void eliminaSpazi(char* buffer, int len, int spz);

int main(){
    char buffer[100];
    int spazi=0;

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len = strlen(buffer);
    compatta(buffer, &len);
    spazi = contaSpazi(buffer, len);
    printf("%d\n", spazi);
    eliminaSpazi(buffer, len, spazi);

    return 0;
}

void compatta(char* buffer, int* len){
    if(*len > 0 && buffer[*len-1]=='\n'){
        buffer[*len - 1] = '\0';
        (*len)--;
    }
}

int contaSpazi(char* buffer, int len){
    int cnt = 0;
    for(int i=0; i<len; i++){
        if(buffer[i]==' ')
            cnt++;
    }
    return cnt;
}
void eliminaSpazi(char* buffer, int len, int spz){
    for(int i=0; i<len; i++){
        
    }
}
