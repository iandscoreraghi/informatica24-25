#include <stdio.h>

int main(){
    int n=0;
    int sumd=0;
    

    /*
        do{
            if(n%2==0){
                n=n/2;
                printf("%d\t", n);
            }else{
                n=n/3;
                printf("%d\t", n);
            }
        }while(n>3);
    
    for(int i = 0; i<6; i++){
        if(i%4==0) i=7;
    }
    */
    printf("inserisci un numero:");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            n=n/i;
            printf("%d*", i);
            i=1;
        }
    }
 printf("\b ");   
}