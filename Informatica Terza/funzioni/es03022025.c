#include <stdio.h>
#include <math.h>
long converti(int n);
/* dato un numero convertire il suo valore in binario*/
int main(){

    int n=0;
    long cnv=0;
    do{
        printf("inserisci un numero");
        scanf("%d", &n);
    }while(n<=0);
    cnv=converti(n);
    printf("%ld\n", cnv);
}
    long converti(int n){
        int quoz=0, resto=0, cnt=0, _cnv=0;   

    while(quoz!=0){
        resto=quoz%2;
        quoz=quoz/2;
        _cnv=pow(10, cnt);
        cnt++;
    }
    return _cnv;
}