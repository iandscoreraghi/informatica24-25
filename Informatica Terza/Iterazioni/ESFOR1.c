#include <stdio.h>

int main(){
    int num1, num2, i;
    int somma=0;
    
    
    do{
        printf("inserisci il primo valore");
        scanf("%d", &num1);
    }while(num1<0);
    do{
        printf("inserisci il secondo valore");
        scanf("%d", &num2);
    }while(num2<0);

for(i=0; i<num1; i++){
    somma+=num2;
}


}