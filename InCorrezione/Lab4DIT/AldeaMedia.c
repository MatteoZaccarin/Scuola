//Aldea Robert 4^DIT 
/*	
	Esercizio 1 
	Programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e 
	calcoli la media della lunghezza delle stringhe. salvare file cognomeMedia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int Num=0, i, somma=0;
    float Media;  // Media come float per gestire i decimali
    if(argc<=1) 
	{
        printf("ERRORE.\n");
    }else
	{
        for (i=1; i<argc; i++) 
		{
            somma+= strlen(argv[i]);
        }
        Media =(float)somma/(argc-1);  // Divido per argc-1 perché il primo argomento è il nome del programma
		printf("La media della lunghezza delle stringhe e': %.2f\n", Media);
    }

    return 0;  // Indica che il programma è terminato correttamente
}
