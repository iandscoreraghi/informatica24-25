#include <stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int num5=0;
    int unità;
    
    printf("Inserisci una distanza unitaria:");
    scanf("%d", &unità);
    printf("inserisci num1:" );
    scanf("%d", &num1);
    printf("inserisci num2:" );
    scanf("%d", &num2);
    printf("inserisci num3:" );
    scanf("%d", &num3);
    printf("inserisci num4:" );
    scanf("%d", &num4);
    printf("inserisci num5:" );
    scanf("%d", &num5);
    
    //controllo se tutti i numeri hanno la stessa distanza unitaria
    
   if(num2 == num1 + unità &&num3 == num2 + unità &&num4 == num3 + unità &&num5 == num4 + unità){
       printf("la sequenza di numeri ha la stessa distanza unitaria");
}else{
    printf("La squenza di numeri non ha la stessa distanza unitaria");
}
}