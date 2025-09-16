#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int sceltautente=0, sceltacomputer=0;

    sceltacomputer=rand()%3+1;
    printf("scegli tra sasso=1, carta=2, forbice=3");
    scanf("%d", &sceltautente);

    if(sceltautente==1 || sceltautente==2 || sceltautente==3){
        if(sceltacomputer==sceltautente){
            printf("pareggio")
        }
    }
}