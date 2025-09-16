#include <stdio.h>
int calcoloTempo(int _ntemp);

int main(){
    int ntemp=0;
    
    printf("inserisci numero secondi: ");
    scanf("%d", &ntemp);
    calcoloTempo(ntemp);
    
    return (0);
}
    int calcoloTempo(int _ntemp){
    int nsec=0;
    int nmin=0;
    int nore=0;
    
    nsec=_ntemp-(_ntemp/60*60);
    nore=(_ntemp-nmin*60-nsec)/3600;
    nmin=(_ntemp-nsec)/60;
    
    do{
    if(nmin>=60){
        nmin=nmin-60;
    }
    }while(nmin>=60);
    
    printf("%d ore %d minuti %d secondi", nore,nmin,nsec);
    
    }

   
    
