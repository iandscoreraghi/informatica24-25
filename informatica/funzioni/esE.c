/*Scrivere una funzione per la risoluzione di equazioni di secondo grado (v. anche 
l’Esercizio 5 di E7 ) della forma 𝑎𝑥
2 + 𝑏𝑥 + 𝑐 = 0 in base alle seguenti indicazioni. La funzione riceve 
tre parametri (di tipo double) passati per valore che rappresentano i tre coefficienti a, b e c e due 
parametri x1 e x2 (anch'essi di tipo double) passati per riferimento. La funzione ritorna un valore 
intero.
Se l'equazione ha soluzioni reali la funzione ritorna 1 e nei parametri x1 e x2 vengono scritte le 
soluzioni dell'equazione. Se l'equazione non ha soluzioni reali la funzione ritorna 0 e le variabili x1 e 
x2 non vengono scritte.*/

#include <stdio.h>

int main(){

    int a=0;
    int b=0;
    int c=0;
    int quadb=0;
    int molt_a=0;
    int delta=0;
    float sol1=0;
    float sol2=0;
    int molt2_a=0;


    printf("inserisci un numero per a : ");
    scanf("%d", &a);
    printf("inserisci un numero per b : ");
    scanf("%d", &b);
    printf("inserisci un numero per c : ");
    scanf("%d", &c);

    quadb=b*b;
    molt_a= a*4;
    molt2_a= a*2;

    printf("%d\n", quadb);
    printf("%d\n", molt_a);

    delta= quadb-(molt_a)*(c);
    printf("%d", delta);

    if(delta<0){
        printf("\n non ci sono soluzioni possibili");
    } else if (delta==0){
        sol1= (-b-(delta))/molt2_a;
        printf("%f", sol1);
        sol1=sol2;
    } else {
        sol1= (-b-(delta))/molt2_a;
        sol2= (-b+(delta))/molt2_a;
        printf("\n%.4f\n", sol1);
        printf("%.4f\n", sol2);

    }


}



