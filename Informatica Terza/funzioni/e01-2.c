#include <stdio.h>
int calcoloPotenza(int _b, int _e);

int main(){

    int b=0;
    int e=0;
    int ris=0;
    
        printf("inserisci base:");
        scanf("%d", &b);
        printf("inserisci potenza:");
        scanf("%d", &e);
        ris=calcoloPotenza(b, e );
        printf("%d^%d=%d", b, e, ris);
    }  
    
int calcoloPotenza(int _b, int _e ){
    int risultato=1;
    for(int i=1; i<=_e; i++){
        risultato= risultato*_b;
    }
    return (risultato);
}

