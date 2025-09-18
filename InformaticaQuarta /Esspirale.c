#include <stdio.h>
#define N 4 
void riempiMatrice(int mat[][N]);
void stampaMatrice(int mat[][N]);

int main(){
    int mat [N][N];
    
}
    void riempiMatrice(int mat[][N]){
        int num=0;
        int i;
        int top=0, bottom=N-1;
        int left=0, right=N-1;

        while(num<=N*N){
            for(i=left; i<=right; i++)
                mat[top][i]= num+1;
            top++;
            for(i=top; i<=bottom; i++)
                mat[i][right]= num+1;
            right--;
            for(i=right; i>=left; i--)
                mat[bottom][i]=num+1,
            bottom--;
            for(i=bottom; i>=top; i--)
                mat[i][left]=num+1;
            left++;

        }
    }
    void stampaMatrice(int mat[][N]){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                printf("%d\t", mat[i][j]);
            printf("\n");
            }
        }
    }