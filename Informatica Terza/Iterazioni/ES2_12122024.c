#include <stdio.h>

int main(){
    int num=0;
    int cnt=0;
    int max=0;

    for(int i=0; i<10; i++ ){
        printf("inserisci un numero");
        scanf("%d", &num);
        if(i==0){
            max=num;
        }
        if(num>max){
            max=num;
            cnt=1;
        }
        else if(num=max)
            cnt++;
    }
    printf("Il numero maggiore è %d ", max);
    printf("Il numero compare %d volte ", cnt);

    //3 5 7 5 7 7 2 1 

}