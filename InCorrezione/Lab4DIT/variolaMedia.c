//Mattia Variola 4DIT 19/11/24
//Es1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	if(argc>=2){   //Verifico che il nuero di parametri sia corretto.
		int i=1;
		int n;
		int somma;
		char pMax;
		int max=0;
		int lun[i];
		for(i=1;i<argc;i++){
			n=strlen(argv[i]);  //Assegno la dimensione (numero di caratteri) di argv[] a n.
			if(n>max){
				max=n;   //Se n>max assegno a max il valore di n.
				pMax=argv[i];
			}
			somma=somma+n;  //Eseguo la somma dei caratteri presenti in tutti i parametri.
		}	
		int media=somma/(argc);        //Calcolo la media dei caratteri dividento la somma dei caratteri di tutti i parametri con il numero di parametri.
		printf("La media della lunghezza delle stringhe e di %d caratteri.\n", media);
		printf("La parola più lunga e compsta da %d lettere, ed e la parola %c\n", max, pMax);
	}
	else
	{
			printf("Numero dei parametri errato."); 
	}
	return 0;
}
