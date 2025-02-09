#include <stdio.h>
int calcoloNumeroPrimo(int _n);
int main(){
    int n=0;
    int trov;
    printf("inserisci un numero:");
    scanf("%d", &n);
    trov=calcoloNumeroPrimo(n);
    if(trov==1){
        printf("Il numero inserito è primo\n");
    }else{
        printf("Il numero non è primo\n");
    }
    return(0);
}
int calcoloNumeroPrimo(int _n){
    int sumd=0;
    int trovato=0;
    for(int i=1; i<=_n; i++){
        if(_n%i==0){
            sumd+=i;
        }
    }
    
    if(sumd==_n+1){
        trovato=1;
    }
    return(trovato);
}