#include <stdio.h>

int main(){
    int num=0;
    int cntn=0;
    int sum_negativi=0;
    int sum_positivi=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=5);

    {
    for(int i=0; i<num; i++)
        printf("inserisci un numero: ");
        scanf("%d", &num);
        if(num<0)
            sum_negativi+=num;
        else
            sum_positivi+=num;
    }
        
        printf("la somma dei numeri negativi vale %d " sum_negativi);
        printf("la somma dei numeri positivi vale %d " sum_positivi);

}