/* CALCOLARE IL QUIOZIENTE FRA DUE NUMERI APPLICANDO
    IL METODO DELLE SOTTRAZIONI SUCCESSIVE 
*/

#include <stdio.h>
int main(){
    int num1, num2;
    int quoz=0;
    int temp;
    
    do{
        printf("inserisci un valore: ");
        scanf("%d", &num1);
    }while(num1<=0);

    do{
        printf("inserisci un secondo valore: ");
        scanf("%d", &num2);
    }while(num2<=0);

    do{
        quoz=num1-=num2;
        printf("%d", quoz);
    }while(num2>=num1);

    
}
