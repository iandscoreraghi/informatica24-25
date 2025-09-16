/*PROGETTARE UN ALGORITMO CHE LEGGA UN NUMERO b>a E SCRIVA QUANTE VOLTE 
    a è DIVISIBILE PER b.
    ES: a=162 e b=3 a è DIVISIBILE 4 VOLTE PER b
*/

#include <stdio.h>

int main(){
    int num_a=0;
    int num_b=0;
    int q, r;
    int cnt=0;


    do{
        printf("inserisci numero A: ");
        scanf("%d", &num_a);
        printf("inserisci numero B: ");
        scanf("%d", &num_b);
    }while(num_a<num_b);

    q=num_a;
    while(q>num_b && r!=0){
        if(q%num_b==0){
            r=q%num_b;
            cnt++;
            q=q/num_b;
        }

    } prinf("a è divisibile per b %d volte " &cnt++);
   

    
  
    
}