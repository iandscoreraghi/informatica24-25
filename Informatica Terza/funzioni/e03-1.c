#include <stdio.h>

void sequenzaCollatz(int *_n);

int main(){
    int n=0;
    
    do{
    printf("inserisci un numero:");
    scanf("%d", &n);
    }while(n<=0);
    sequenzaCollatz(&n);

}
void sequenzaCollatz(int*_n){
    int cntn=0;
    while(*_n!=1){
        if(*_n%2==0){
            *_n=*_n/2;
            cntn+=1;
            printf("%d\t", *_n);
        }else{
            *_n=(*_n*3)+1;
            cntn+=1;
            printf("%d\t", *_n);
        }
        
    }printf("\nla lunghezza della sequenza è di %d", cntn);
}