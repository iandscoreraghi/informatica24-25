#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int stringa_in_stringa(char* stringa1, char* stringa2);

int main(){
    char buffer[30];    // Array di char per la prima stringa
    char buffer1[30];   // Array di char per la seconda stringa

    printf("inserisci la tua stringa: ");
    fgets(buffer, 30, stdin);
   
    printf("hai inserito: %s\n", buffer);

    printf("inserisci la tua stringa: ");
    fgets(buffer1, 30, stdin);
    
    printf("hai inserito: %s\n", buffer1);

    int sottostringa = stringa_in_stringa(buffer, buffer1);
    printf("la stringa s è presente %d volte all'interno della stringa \"%s\"\n", buffer1, sottostringa, buffer);

    return 0;
}

int stringa_in_stringa(char* stringa1, char* stringa2){
    int dim1 = strlen(stringa1);
    int dim2 = strlen(stringa2);
    int cnt = 0;

    
    for(int i = 0; i <= dim1 - dim2; i++){
        int flag = 1;
        for(int j = 0; j < dim2; j++){
            if(stringa1[i+j] != stringa2[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cnt++;
    }
    return cnt;
}
