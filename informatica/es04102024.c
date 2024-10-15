#include <stdio.h>

int main(){
    int base=0;
    int altezza=0;
    int perimetro;
    int area;

    printf("inserisci valore base:");
    scanf("%d", &base); 
    printf("inserisci valore: ");
    scanf("%d", &altezza);
    perimetro=(base+altezza)*2;
    area=base*altezza;
    printf("il perimetro è di: %d\n", perimetro);
    printf("Area è di: %d\n", area);
    
    if(base==altezza){
        printf("la figura è un quadrato");
    }else{
        printf("la figura è un rettangolo");
    }

    return 0;

    }




#include <stdio.h>

int main(){
    int base;
    int lato1;
    int lato2;
    int perimetro;
    int area;
    int altezza;
    printf("inserisci valore base:");
    scanf("%d", &base);
    printf("inserisci valore lato1:");
    scanf("%d", &lato1);
    printf("inserisci valore lato2:");
    scanf("%d", &lato2);
    printf("inserisci valore altezza");
    scanf("%d", &altezza);
    
    if(base==lato1){
        (base==lato2);
        printf("la figura è un triangolo equilatero");  
        
    }else{
        printf("la figura non è un triangolo equilatero\n");
    }
    
    perimetro=base+lato1+lato2;
    area=(base*altezza)/2;
    printf("il perimetro è di: %d\n",perimetro);
    printf("l'area è di: %d\n", area);
    
    
    
    
}