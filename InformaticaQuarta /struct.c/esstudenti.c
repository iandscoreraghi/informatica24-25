/*classe di studenti:
Cognome, nome, classe, matricola
Per ogni studente dotato di matricola abbiamo le informazioni 
riguardante gli esami e il livello raggiunto
1) ricercare lo studente con piu certificazioni*/
#include <stdio.h>
#include <stdlib.h> 

typedef struct{
    char nome[20];
    char cognome[20];
    char classe[3];
    int matricola
}Studente;

typedef struct{
    int matricola;
    struct esame;
    char corso [20];
    int livello;
}certificazioni;

Studente stampainfoalunno(Studente *alunno);

int main(){

    Studente *alunno;
    certificazioni *cert;

    stampainfoalunno(alunno);

}
Studente riempiinfoalunno(Studente *alunno){
    printf("inserisci il nome dell'alunno:");
    scanf("%s", alunno->nome);
    printf("inserisci il cognome dell'alunno:");
    scanf("%s", alunno->cognome);
    printf("inserisci la classe dell'alunno:");
    scanf("%s", alunno->classe);
    printf("inserisci la matricola dell'alunno:");
    scanf("%d", alunno->matricola);
}

