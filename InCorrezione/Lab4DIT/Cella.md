# File di Cella

## Contenuto di CellaMedia.c

//Alessandro Cella 4DIT
//Es 1 
//Scrivi un programma in C che accetti una lista di stringhe come argomenti
//tramite linea di comando e calcoli la media della lunghezza delle stringhe

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	float media, nStringhe=0;
	int i=1; 
	int lunghezza=strlen(argv[1]); 
	for(i=1; i<argc; i++)
	{
		lunghezza=strlen(argv[i]);
		media=lunghezza+media;
		nStringhe++;		
	}
	media=media/nStringhe;
	printf("La lunghezza media di e': %f", media);
	printf("\nLe stringhe piu lunghe della media sono: ");
	for(i=1; i<argc; i++)
	{
		lunghezza=strlen(argv[i]);
		if(media<lunghezza)
		{
			printf("%s", argv[i]);	
		}
			
	}
	return 0;
}

//SOL bravo

## Contenuto di CellaPrimi.c

//Alessandro Cella 4DIT
//Es 2 
//Si scriva un programma in C che accetti una lista di numeri come argomenti e tramite linea di comando
//identifichi quali numeri sono primi tra quelli forniti. Si assume che tutti gli argomenti siano interi positivi


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

	int i=1, valore=0, j=3; 
 	printf("i numeri primi sono: ");
	for(i=1; i<argc; i++)
	{
		valore=atoi(argv[i]);
		if(valore%2==0){} 
		else
		{
			for(j=3; j<valore; j++)
			{
				if(valore%j==0){}
	
			}
		if(valore!=j)
		{
		printf(" %d", valore);
		}
		
		}			
	}


	return 0;
}

//SOL il codice non é terminato
## CellaVocali
/* 
Cella Alessandro 4DIT
Es1 "Vocali"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i=1, j=1, nVoc=0, maxVoc=0;
	int lung, nParola=1;
	lung = strlen(argv[1]);
	for(j=1;j<argc;j++)
	{
			for(i=1; i<lung; i++)
			{
			
				if(argv[i]=='a')
				nVoc++;
				if(argv[i]=='e')
				nVoc++;
				if(argv[i]=='i')
				nVoc++;
				if(argv[i]=='o')
				nVoc++;
				if(argv[i]=='u')
				nVoc++;
				
			}
		
		if(nVoc>maxVoc)
		{
			maxVoc=nVoc;
			nParola=j;
		}
		
		
	}
	
	
	printf("La parola %s contiene la maggior quantita' di vocali ovvero: %d ", argv[nParola] , nVoc);
	return 0;
}

//SOL non accedi mai a una singola cella di una stringa, dovresti farlo con argv[i][j]

## /* 
Cella Alessandro 4DIT
Es2 "Somma"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i=1, j=3, somma=0, n=0;
	
	for(i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		if(n%2==0){}
	
		else
		{
		 for(j=3;j<argc;j++){
		 if(n%j==0){
		 	j=n++
		 	}
		 }
		
		somma=argv[i]+somma;
		}
	}
	
	printf("la somma e': %d", somma);
	return 0;		
}

//SOL errore di compilazione