#include <stdio.h>

#include <stdio.h>

int main()//inizio
{
int  prezzoBiglietto= 12;
int  prezzoAlunni;
int  docenti=2;
int  alunni;
int  scontoProfessori;
int  costoSostenuto;
printf("inserisci numero alunni: ");
scanf("%d", &alunni);

scontoProfessori=12*50/100;
scontoProfessori= scontoProfessori*2;
printf("lo sconto professori è: %d\n" ,scontoProfessori);
prezzoAlunni= prezzoBiglietto*alunni;
costoSostenuto=scontoProfessori+prezzoAlunni;
printf("il costo sostenuto è: %d ",costoSostenuto);
printf("il costo degli alunni è: %d\n",prezzoAlunni);
}




#include <stdio.h>

#include <stdio.h>

int main()//inizio
{
    int resto;
    int numeroLitri;
    int costoLitro;
    int valoreBanconota;
    int costoTotale;
    printf("inserisci numeroLitri: ");
    scanf("%d", &numeroLitri);
    printf("inserisci costoLitro:");
    scanf("%d", &costoLitro);
    printf("inserisci valoreBanconota: ");
    scanf("%d", &valoreBanconota);
    costoTotale=numeroLitri*costoLitro;
    printf("il costoTotale è: %d\n", costoTotale);
    resto=valoreBanconota-costoTotale;
    printf("il resto è: %d\n", resto);
}





#include <stdio.h>

int main()
{
    int studenti;
    int under15;
    float prezzoBiglietto = 3.50;
    float underScontato = 2.10;
    float tot= studenti*prezzoBiglietto;
    float totGratis;
    float totSconto;
    int tot12;
    
    printf("Quanti studenti ci sono? ");
    scanf("%d", &studenti);
    
    printf("Quanti sono al di sotto dei 15 anni? ");
    scanf("%d", &under15);
    
    tot12= studenti/12;
    
    printf("Passeranno gratuitamente %d studenti\n", tot12);
    printf("Gli studenti al di sotto dei 15 anni che hanno il biglietto scontato del 40 sono %d \n", under15);
    
    
    totGratis= tot - (tot12 * prezzoBiglietto);
    totSconto= totGratis - (underScontato * under15);
    printf("Tolti gli studenti che passeranno gratuitamente il totale sarà di %f: ", totGratis);
    printf("\n");
    printf("Tolti gli studenti che passeranno con lo sconto il totale sarà di %f: ", totSconto);

    return 0;
}