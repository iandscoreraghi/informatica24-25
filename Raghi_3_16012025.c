#include <stdio.h>

int main(){
    int n=0;
    int unita=0;
    int decine=0;
    int centinaia=0;

    printf("inserisci un numero:");
    scanf("%d", &n);

    if(n<10){
        unita==n;
        printf("le unita sono %d", unita);
    }
        if(n<100){
            decine=n/10;
            unita=n-decine*10;
            printf("le decine sono %d e le unita sono %d ", decine, unita);
        }
            if(n<1000){
                centinaia=n/100;
                decine=(n-centinaia*10)/10;
                unita=centinaia*100-decine*10;
            }

}