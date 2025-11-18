#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int main(){
    char buffer[50];
    String s1= buffer;
    int n_cifratura=0;
    int i=0;
    int overlettera=0;
    char salfabeto[]= "abcdefghijklmnopqrstuvwxyz";

    printf("inserisci la tua stringa: ");
    fgets(buffer, 50, stdin);

    printf("ecco la stringa: %s", s1);

    do{
    printf("inserisci numero della cifratura: ");
    scanf("%d", &n_cifratura);
    }while(n_cifratura<1);
    
    while(s1[i] != '\0'){
        s1[i]+= n_cifratura;
        if(s1[i]> 'z')
        s1[i]=s1[i]-26;
        i++;
    }
    printf("ecco la stringa modificata: %s", s1);

    while(s1[i] != '\0'){
        s1[i]-= n_cifratura;
        if(s1[i]> 'z')
        s1[i]=s1[i]+26;
        i++;
    }
}