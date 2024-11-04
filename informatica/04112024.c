#include <stdio.h>

int main(){
    float sommadenaro=0;
    float sommaconvertita=0;
    int scelta=0;
    const float tasso=1.23;

    ptintf("Scegli l'operzazione che vuoi fare: 1 per cambio dollari/euro, 2 per euro/dollari");
    scanf("%d", &scelta);
    printf("inserisci il valore che vuoi convertire:");
    scanf("%d", &sommadenaro);

    switch(scelta){
        case 1:
            sommaconvertita= sommadenaro/tasso;
            printf("%f $ = %f €", sommadenaro, sommaconvertita);
            break;
        case 2:
            sommaconvertita= sommadenaro*tasso;
            printf("%f $ = %f €", sommadenaro, sommaconvertita);
            break;
        default:
            printf("hai scelto un'operazione non valida");
            break;
    }   

    if(scelta==1){
        sommaconvertita= sommadenaro/tasso;
        printf("%f $ = %f $", sommadenaro, sommaconvertita);
    } else if(scelta==2){
        sommaconvertita= sommadenaro*tasso;
        printf("%f $ = %f $", sommadenaro, sommaconvertita);
}else{
    printf("hai scelto un'operazione non valida");
}

}