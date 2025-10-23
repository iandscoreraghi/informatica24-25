#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
String trasformaMaiuscolo(String s);

int main() {
    char buffer[50];  
    String s = buffer; 

    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);

    size_t len = strlen(s);
    if (len > 0 && s[len - 1]=='\n') {
        s[len-1] ='\0';
        len--;
    }

    printf("Hai inserito:%s\n",s);

    s=trasformaMaiuscolo(s);
    
    printf("Maiuscolo: %s\n", s);
    printf("Lunghezza stringa: %zu\n", len);

    return 0;
}
String trasformaMaiuscolo(String s) {
    int i=0;
    while(s[i]!='\0'){
        if (s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-('a'-'A');
        }
        i++;
    }
    return s;
}