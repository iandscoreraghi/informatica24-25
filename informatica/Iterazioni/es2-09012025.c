#include <stdio.h>
int main(){
    int n=0;
    int x=0;
    int cntt=0;

        do{
            printf("inserisci un numero:");
            scanf("%d",&n);
        }while(n<=0);

            do{
                printf("inserisci un numero:");
                scanf("%d", &x);
            }while(x<=0);

                for(int j=0; j<=n; j++){
                    if(j<x)
                        cntt++;
                    printf("i numeri minori di x sono: %d\n", cntt);
                }
}