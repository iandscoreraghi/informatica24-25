/*es numero perfetto= somma dei divisori= somma del numero stesso..
    scrivi un programma che ricerca i primi 3 numeri perfetti e li visualizza sullo schermo
        es n=6 divisori:1,2,3 che sommatio danno 6 */
    
#include <stdio.h>
int main(){
    int n=0;
    int sumt=0;

    for(int i=1; i<500; i++){
        sumt=0;
        for(int j=1; j<=i/2; j++){
            if(i%j==0){
                sumt+=j;
            }  
        }
        if(sumt==i){
            printf("numero perfetto: %d\n", i);
        }
    }  

}