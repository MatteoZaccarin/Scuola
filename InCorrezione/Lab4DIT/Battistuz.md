# File di Battistuz

## Contenuto di BattistuzMedia.c

//Battistuz Fabio 4^DIT
//Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc,char* argv[])
{
	int media;
	int i;
	int somma=0;
	int t=1;
	for(i=1;i<argc;i++)
	{
		somma=somma+strlen(argv[i]);
		t++;
	media=somma/t;
	
	}
	printf("la media della stringa %d\n",media);
	for(i=1;i<argc;i++)
	{
		if(strlen(argv[i])>media)
		{
			printf<("la parola con la lunghezza superiore alla media e %s",argv[i]);
		}
	}
	return 0;
}
//SOL non si calcola cosí la media
## Contenuto di BattistuzPrimi.c

//Battistuz Fabio 4^DIT
//Si scriva un programma in c che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quai numeri sono primi tra quelli forniti.Si assume che tutti gli argomenti siano interi e positivi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc,char* argv[])
{
	if (argc<1)
	{
		printf("errore nell'inserimento dei parametri");
	}
	int i;
	int div;
	int n=atoi(argv[i]);
	for(i=1;i<argc;i++)
	{
		conta=0;
		for(div=2;div<n/2;div++)
		{
			if(n%div!=0)
			{
			 	
			}
			printf("il numero %d e primo",t);	
		}	
		
	}
	return 0;
}

//SOL non compila, non terminato

## BattistuzPrimo
/Battistuz Fabio 4DIT 26/11/2024
//Scrivi un programma in C che accetti una lista di stringhe come argomenti da linea di comando e determini:
//Quale stringa contenga il numero massimo di vocali (a, e, i, o, u, sia maiuscole che minuscole). Voglio il numero e anche la stringa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	int t;
	int conta=0;
	int j;
	char n;
	int contaVocali;
	for(i=1;i<argc;i++)
	{
		for(j=0;j<strlen(argv[i]);j++)
	    {
	    	n=argv[i][j];
			if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
			{
			contaVocali++;
			}
			if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
			{
			contaVocali++;
			}
		}
	
		if(contaVocali>conta)
		{
			conta=contaVocali;
			t=i;
	    }
	    contaVocali=0;
	}
			printf("la stringa comprende tutte le vocali possibili e la parola e %s e il numero e %d", argv[t],conta);
		
	return 0;
}

//SOL devi inizializzare contaVocali

## Battistuz Secondo
//Battistuz Fabio 4DIT 26/11/2024
//Scrivi un programma in C che accetti una lista di numeri interi tramite linea di comando e determini:La somma dei numeri primi forniti.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
    if(argc!=1)
	{
        int contaDiv=0;
        int num;
        int i;
        int div;
        int somma=0;
        for( i=1;i<argc;i++)
		{
            num=atoi(argv[i]);
            for( div=2;div<=(num/2);div++){
                if(num%div==0)
                    contaDiv++;
            }
            if(contaDiv==0)
            {
            somma=somma+num;
            contaDiv=0;
            }
        }
         printf("la sommma di numeri primi e %d", somma);
    }
	else
        printf("numero di parametri errato");
    return 0;
}
//SOL contadiv va sempre inizializzata, non solo se é primo








