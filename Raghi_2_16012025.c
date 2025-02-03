#include <stdio.h>

int main(){
    int n1=0;
    int n2=0;
    int div=1;
    int cntdiv=0;
    int sumdiv=0;

    printf("inserisci un numero:");
    scanf("%d", &n1);
    printf("inserisci un numero:");
    scanf("%d", &n2);

    do{
        if(n1%div==0){
            sumdiv+=div;
        }
        div++;
    }while(div<=n1/2);

    printf("la somma dei divisori è %d\n", sumdiv);

    if(sumdiv==n2){
        printf("i due numeri sono amicali:");
    }else{
        printf("i due numeri non sono amicali:");
    }
    
    


}