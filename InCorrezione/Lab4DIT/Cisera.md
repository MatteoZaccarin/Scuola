# File di Cisera

## Contenuto di CiseraMedia.c

/*
Scrivi un programma in c che accetti una lista di stringhe come argomenti 
tramite linea di comando e ne calcoli la media della lunghezza delle stringhe
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	if(argc==1)
	{
		printf("Numero errato di parametri\n");
		return 0;
	}
	int lung=0;
	for(i=1; i<argc; i++)
	{
		lung=lung+strlen(argv[i]);
		printf("La lunghezza della stringa %d e' %d\n", argc, strlen(argv[i]));		
	}
	int media=lung/argc;
	printf("La media della lunghezza di %d stringhe e' %d\n", argc, media);
	printf("Le stringhe piu lunghe della media sono: ");
	for(i=1; i<argc; i++)
	{
		int lun=strlen(argv[i]);
		if(lun==media)
		{
			printf("%s ", argv[i]);	
		}	
	}
	return 0;		
}

//SOL devi divedere per argc -1 e non argc, non voglio il return 0 se non alla fine, nel secondo ciclo devi stampare i maggiori della media
  non uguali

## Contenuto di CiseraPrimi.c

/*
Scrivi un programma in c che accetti una lista di numeri interi come argomenti
tramite linea di comando e identifichi quali numeri sono primi tra quelli.
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, y;
	if(argc==1)
	{
		printf("Numero errato di parametri\n");
		return 0;
	}
	printf("I numeri primi sono : ");
	for(i=1; i<argc; i++)
	{
		int numero=atoi(argv[i]);
		for(y=0; y<numero+1; y++)
		{
			int divisore=2;
			if((numero%divisore)==0)
			{
				break;
			}
			divisore=divisore+1;
			if(divisore==numero-1)
			{
				printf("%d ", numero);
				break;
			}
		}	
	}			
	return 0;		
}

//SOL non voglio il break, non capisco a cosa ti serva il for con la y fino a numero +1 infatti non funziona, usa direttamente div nel secondo ciclo

## secondo
/*
Scrivi un programma in C che accetti una lista di numeri interi tramite 
linea di comando e determini:La somma dei numeri primi forniti.
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<2)
	{
		printf("Numero di parametri errato\n");
	}
	else
	{
		int i;
		int sommaprimi=0, contaprimi=0;
		for(i=1; i<argc; i++)
		{
			int num=atoi(argv[i]);
			int divisore=2;
			int verifica=1;
			while(divisore<=num/2 && verifica==1)
			{
				if(num%divisore==0)
				{
					printf("Il numero %d non e' primo\n", num);
					verifica=2;
				}
				else
				{
					divisore++;
				}
			}
			if(verifica==1)
			{
				printf("Il numero %d e' primo\n", num);
				contaprimi++;
				sommaprimi=sommaprimi+num;
			}
		}
		printf("La somma dei %d numeri primi e': %d \n", contaprimi, sommaprimi);
		return 0;
	}
}

//SOL ti sei perso il 4 perché devi ciclare finché div<=num/2 e non solo minore

## primo

/*
Scrivi un programma in C che accetti una lista di stringhe come argomenti da linea di comando e determini:
Quale stringa contenga il numero massimo di vocali (a, e, i, o, u, sia maiuscole che minuscole). 
Voglio il numero e anche la stringa.
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<2)
	{
		printf("Numero di parametri errato\n");
	}
	else
	{
		int i,y;
		int maxvocali=0;
		int posizionemax=0;
		for(i=1; i<argc; i++)
		{
			int lun=strlen(argv[i]);
			int contavocali=0;
			for(y=0; y<lun; y++)
			{
				if(tolower(argv[i][y])=='a')
				{
					contavocali++;	
				}
				if(argv[i][y]=='e')
				{
					contavocali++;	
				}
				if(tolower(argv[i][y])=='i')
				{
					contavocali++;	
				}
				if(tolower(argv[i][y])=='u')
				{
					contavocali++;	
				}
				if(tolower(argv[i][y])=='u')
				{
					contavocali++;	
				}
				if(contavocali>maxvocali)
				{
					maxvocali=contavocali;
					posizionemax=i;
				}
			}
			printf("La parola alla posizione %d contiene %d\n", i, contavocali);
		}
		printf("La riga con piu' vocali e' quella alla posizione %d, con %d vocali\n",posizionemax, maxvocali);
		printf("La riga e': %s\n", argv[posizionemax]);
		return 0;
	}
}

//SOL manca la O e la E maiuscola non va, controlla meglio e non servivano funzioni
