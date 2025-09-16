#include <stdio.h>
void calcoloPotenza(int _b, int _e);

int main(){

    int b=0;
    int e=0;
    
        printf("inserisci base:");
        scanf("%d", &b);
        printf("inserisci potenza:");
        scanf("%d", &e);
        calcoloPotenza(b, e );

}void calcoloPotenza(int _b, int _e ){
    int risultato=1;
    for(int i=1; i<=_e; i++){
        risultato= risultato*_b;
    }
    printf("%d^%d=%d", _b, _e, risultato);
}
