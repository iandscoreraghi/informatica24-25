/* calcolare la somma dei primi N numeri naturali
*/

#include <stdio.h>
int main(){
    int n=0;
    int i=1;
    int sumt=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    for(i=1; i<=n; i++){
        sumt+=i;
    }

    printf("la somma totale vale %d", sumt);
    
}