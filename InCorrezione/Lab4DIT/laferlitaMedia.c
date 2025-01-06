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
			printf("%s ", argv[i]);//se è vero stampo il valore
		}
	}
	return 0;
}
