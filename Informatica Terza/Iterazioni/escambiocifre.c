#include <stdio.h>

int main(){
    int num1=0;
    int numq1=0;
    int num2=0;
    int numq2=0;
    int unita1, unita2, decine1, decine2, centinaia1, centinaia2, migliaia1, migliaia2;
    int temp=0;
    int temp1=0;

    do{
        printf("inserisci il primo numero:");
        scanf("%d", &num1);
        printf("inserisci il secondo numero:");
        scanf("%d", &num2);
    }while(num1<1000 || num1>9999 || num2<1000 || num2>9999);

    migliaia1=num1/1000;
    centinaia1=(num1-migliaia1*1000)/100;
    decine1=(num1-migliaia1*1000-centinaia1*100)/10;
    unita1=num1-migliaia1*1000-centinaia1*100-decine1*10;

    printf("%d %d %d %d\n", migliaia1, centinaia1, decine1, unita1);

    migliaia2=num2/1000;
    centinaia2=(num2-migliaia2*1000)/100;
    decine2=(num2-migliaia2*1000-centinaia2*100)/10;
    unita2=num2-migliaia2*1000-centinaia2*100-decine2*10;

    printf("%d %d %d %d\n", migliaia2, centinaia2, decine2, unita2);

    temp=decine1;
    decine1=decine2;
    decine2=temp;


    temp=migliaia1;
    migliaia1=migliaia2;
    migliaia2=temp;


    printf("num1=%d%d%d%d\n", migliaia1, centinaia1, decine1, unita1);
    printf("num2=%d%d%d%d\n", migliaia2, centinaia2, decine2, unita2);
    


}