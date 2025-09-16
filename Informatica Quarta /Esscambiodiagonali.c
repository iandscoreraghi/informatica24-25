#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RIGHE 10
#define COLONNE 10

void riempiMatrice(int mat[RIGHE][COLONNE]);
void stampaMatrice(int mat[RIGHE][COLONNE]);
void scambiaDiagonali(int mat[RIGHE][COLONNE]);

int main(){
    srand (time(NULL));
    int mat [RIGHE][COLONNE];
    riempiMatrice(mat);
    stampaMatrice(mat);
    scambiaDiagonali(mat);
    stampaMatrice(mat);
    
    return 0;
}

riempiMatrice(int mat[RIGHE][COLONNE]){
    for (int i=0; i<RIGHE; i++) {
        for (int j=0; j<COLONNE; j++) {
            mat[i][j] = rand() % 10;
        }
    }
}   
stampaMatrice(int mat[RIGHE][COLONNE]){
    for (int i=0; i<RIGHE; i++) {
        for (int j=0; j<COLONNE; j++) {
            printf("%d ", mat [i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

scambiaDiagonali(int mat[RIGHE][COLONNE]){
    int temp=0;
    for (int i=0; i<RIGHE; i++){
        temp= mat[i][i];
        mat[i][i]= mat[i][COLONNE-1-i];
        mat[i][COLONNE-1-i]= temp;
        }
}
