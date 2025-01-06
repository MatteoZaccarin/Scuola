# File di laferlita

## Contenuto di laferlitaBit.c

//Mauro La Ferlita
//Es 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, num, conta=0;
	for(i=1; i<argc; i++)
	{
		num=atoi(argv[i]);
		if(num>=0)
		{
			printf("Numero %d, ", num);
			if(num!=0)
				num/=2;
			else
				num=1;
			printf("Bit necessari: %d\n", num);
			conta++;	
		}
		
	}
	if(conta==0)
	{
		printf("Nessun numero valido");
	}	
	return 0;
}
//SOL non ho capito cosa volessi fare, serve un ciclo

## Contenuto di laferlitaGruppi.c

//Mauro La Ferlita
//Es 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, j=2, contaGruppo=0, presenza=0;
	for(i=1; i<argc; i++)
	{
		presenza=0;
		if(atoi(argv[i])==1 || atoi(argv[i])==0)
		{
			presenza=1;
			while(atoi(argv[i])==atoi(argv[j]))
			{
				contaGruppo++;
				j++;
			}
			
		}
	}
	if(presenza==1)
		printf("Numero di gruppi consegutivi: %d", contaGruppo);
	else
		printf("Nella stringa non e presente ne 1 ne 0");
	return 0;
}


## Contenuto di laferlitaMedia.c

//Mauro La Ferlita 4^DIT 19/11/2024

/*1)Scrivi un programma in C che accetti una lista di stringhe come argmonenti tramite
linea di comando e calcoli la media della delle stringhe*/

//librerie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main
int main(int argc, char* argv[])
{
	float media=0.0;//assegno un valore a media
	int lunghezza/*memorizzera la lungezza del vettore*/ conta=0/*inizializzo conta la ostra variabile che terra conto del numero di parametri*/, i/*contatore per il for*/;
	for(i=1; i<argc; i++)
	{
		lunghezza=strlen(argv[i]);//vado a misurare la lunghezza della stringa argv[i]
		media=media+lunghezza;//faccio la somma
		conta++;//incremento il conta di 1
	}
	media=(media)/conta;//divido il valore della somma per il numero di argomenti grazie alla variabile conta
	printf("La lunghezza media delle stringhe e': %.1f", media);//stampo la media
	printf("\nLe stringhe piu' lunghe della media sono: ");
	for(i=1; i<argc; i++)
	{
		if(strlen(argv[i])>media)//verifico che argv[i] sia maggiore di media
		{
			printf("%s ", argv[i]);//se � vero stampo il valore
		}
	}
	return 0;
}

//SOL non compilava hai dimenticato una virgola

## Contenuto di laferlitaPrimi.c

//Mauro La Ferlita 4^DIT 19/11/2024

/*2)Si scriva un programma in C che accetti una lista di numeri interi come argomenti
tramite linea di comando e identifichi quali numeri sono primi tra quellli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

//librerie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main
int main(int argc, char* argv[])
{
	int resto/*variabile che memorizza il resto tra n%i*/, x/*contatore*/, i/*e il nostro divisore*/, n/*contiene il numero intero con il comando atoi*/;
	printf("I numeri primi sono: ");
	for(x=1; x<argc; x++)
	{
		//ad ogni ciclo rinizializzo resto ed i
		resto=1;
		i=2;
		n=atoi(argv[x]);//vado trasformare argv[i] in intero e lo assegno ad n
		//verifico nel if se il valore sia positivo quindi maggiore di 0
		if(n>0)
		{
			while(resto!=0 && i<n)//dento il while verifico che resto sia diverso da 0 e la varia
			{
				resto=n%i;//calcola il resto
				i++;//incremento i di uno
			}
			//verifico che i sia uguale a n
			if(i==n)
			{
				printf("%d ", n);	//se e vero vado a stampare il valore primo
			}
		}
	}
	
	return 0;
}

//SOL potevi fermare il loop un po' prima ma bravo
