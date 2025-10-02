#include <stdio.h>


int main(){


    int *array=NULL;
    int n=0;

    do{
    printf("Di quanto deve essere la dimensione dell'array? ");
    scanf("%d", &n);
    }while(n<1);

    array=(int*)malloc(n*sizeof(int));


}