//Calligaris Gianluca 4'DIT 19-11-2024
//ES1
//Consegna:scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]){
	int x;
	int lunghezza=0;
	for(x=0; x<argc; x++)
	{
		
	
	lunghezza=lunghezza+strlen(argv[x]);
	printf("La lunghezza della stringa %d e' %d\n");
	}
	int calcoloMedia= lunghezza/argc;
	printf("La lunghezza di %d e %d\n");
	printf("La lunghezza delle medie:");
	
		for(x=1; x<argc; x++){
			int lunghezza = strlen(argv[x]);
			if(lunghezza==calcoloMedia)
				printf("%s", argv[x]);
		}
	

	
	
	return 0;	
}


