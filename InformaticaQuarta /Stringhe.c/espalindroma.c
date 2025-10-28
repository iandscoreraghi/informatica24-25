/* Verificare se una stringa è palindroma
    Es anna è palindroma
     ciao non è palindroma*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
int buffer[100];
int lunghezza(String s);
int Palindroma(String s, int len);

int main(){
    int dim=0;
    int palindroma;

    String s = (String)= malloc(sizeof(s)*sizeof(char));
    if (s==NULL) return 1;

    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("\n%s", s);
    dim = lunghezza(s);
    printf("\n%d", dim);
    palindroma= Palindroma(s, dim);
}
int lunghezza(String s){
    int i=0;
    while (s[i] != '\0'){
        i++;
    }
    return i-1;
}
int Palindroma(String s, int len){
    int flag=0;
    int j;

    for(int i=0; j=len-1; i<len/2; i++; j-- ){
        if(s[i] != s[j])
        flag=1;
    }
    return flag;
}