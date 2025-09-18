#include <stdio.h>
#define RIGHE 4
#define COLONNE 4


int main(){
    int mat [RIGHE][COLONNE];
    int val=0;

    for(int j=0; j<4; j++){
        mat [0][j]= val++;
        printf("%d ", mat [0][j]);

    }
}