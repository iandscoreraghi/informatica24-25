#include <stdio.h>
void quadrato (int *_n, int *_quad, int *_val);
int main(){
    
    int n=0;
    int quad=1;
    int val=0;
    
    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    
    quadrato(&n, &quad, &val);
    
    
    }
void quadrato(int *_n, int *_quad, int *_val){
    
    *_val=*_n**_n;
    for(int i=1; i<=*_n; i++){
        printf("%d+", *_quad);
        *_quad+=2;
        
        if(i==*_n){
            printf("\b");
            printf("=%d", *_val);
        }
    }
}