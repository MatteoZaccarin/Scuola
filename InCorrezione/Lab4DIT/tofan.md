# File di tofan

## Contenuto di tofanBit.c

//TOFAN DAVID 4DIT 23/11/2024
//ES1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int num, i, j, blocco=0, div=num, stop;
	for(i=1;i<argc;i++)
	{
		int bit=0;
		num=atoi(argv[i]);
		if(num<0)
		{
			blocco++;
			printf("sono stati inseriti %d numeri non accettabili\n", blocco);
			printf("%d", num);
		}
		if(num>0){
			if(num>=0 && num<=1)
			{
				bit=1;	
			}
			if(num>=2 && num<=3)
			{
				bit=2;
			}
			if(num>3 && num<=7)
			{
				bit=3;	
			}
			if(num>7 && num<=15)
			{
				bit=4;	
			}
			if(num>15 && num<=31)
			{
				bit=5;	
			}
			if(num>31 && num<=63)
			{
				bit=6;	
			}
			if(num>63 && num<=127)
			{
				bit=7;	
			}	
			
		printf("numero: %d, Bit necessari: %d \n", num, bit);	
		}
			
	}
	return 0;			
	}	
		
//SOL lo fai a mano, bastava fare un ciclo in cui dividevi per due

## Contenuto di tofanMedia.c

/*
scrivere programma che accetti una lista di stringhe come argomenti tramite linea di comando
e caloli la media della lunghezza delle stringe
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	float media=0, lunghezza;
	if(argc>2)
	{
		for(i=1;i<argc;i++)
		{
			lunghezza= strlen(argv[i]);
			media=media+lunghezza;		
		}
		media=media/(argc-1);
		printf("la media della lunghezza delle strighe e': %f ", media);
		printf("\n");
		printf("le parole piu lunghe sono:\n");
		for(i=1;i<argc;i++)
		{
			if(strlen(argv[i])>media)
			{
				printf("%s\n", argv[i]);
			}	
		}	
	}
	else
	{
		printf("numero di parametri insufficienti");
	}
	return 0;
}

//SOL bravo

## Contenuto di tofanPrimi.c

//TOFAN DAVID 4DIT ES2
/*
scrivere programma che accetti una lista di numeri come argomenti tramite linea di comando e identifichi quali sono primi tra quelli forniti
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i,j, n, conta=0;
	if(argc>2)
	{
		for(i=1;i<argc;i++)
		{
			n=atoi(argv[i]);
			if(n==2)
			{
				printf("%d e' un numero primo\n", n);	
			}
			if(n%2!=0)
			{
				printf("%d e' un numero primo\n", n);	
			}		
		}
			
	}
	else
	{
		printf("numero di parametri insufficienti");
	}
	return 0;
}

//SOL non basta questo per controllare se un numero è primo
