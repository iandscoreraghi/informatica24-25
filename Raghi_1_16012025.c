#include <stdio.h>

int main(){
    int cntn=0;

    for(int i=0; i<=500; i++){
        cntn=0;
        for(int j=0; j<=i/2; j++){
                if(i%1==0){
                    cntn++;
                }if(i%i==0){
                    cntn++;
                }
            else if(cntn==2){
                printf("%d\t", i);
            }else if(cntn>2){
                printf("");
            }
        }
            
                
        }
    }
