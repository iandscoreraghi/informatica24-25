#include    <stdio.h>
int main(){
    
    float n1=0;
    float n2=0;
    float n3=0;
    float max=0;
    float min=0;
    float media=;
    

    printf("inserisci i 3 valori");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    max=n1;
    min=n1;
    if(max<n2){
        max=n2;
            if(max<n3)
                max=n3;
    }
            
    else
    if(max<n3){
        max=n3;


    printf("il massimo è: %f", max);
    
    
    }
    else
        if(min>n3)
            min=n3;
    printf("il minimo è: %f", min);

    media=(n1+n2+n3)/3;
    printf("\nLa media vale: %.2f", media);
 



}