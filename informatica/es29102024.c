#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numero= rand();
    
    printf("n: %d\n", numero);
    
    printf("maxval casuale: %d", RAND_MAX );
    int r1= (rand() %20) +1; 
    printf("n casuale (1-20): %d", r1);
    return 0;
}