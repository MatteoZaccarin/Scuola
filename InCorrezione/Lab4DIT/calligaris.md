# File di calligaris

## Contenuto di calligarisMedia.c

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

//SOL, hai considerato anche il nome dell' eseguibile nella media, stampi stringhe col %d, non capisco il procedimento

## Contenuto di calligarisPrimi.c

//Calligaris Gianluca 4'DIT
//Es2

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

 primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; 
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Inserisci almeno un numero come argomento.\n");
        return 1;
    }

    printf("Verifica numeri primi:\n");

    
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]); 
        if (primo(num)) {
            printf("%d � un numero primo.\n", num);
        } else {
            printf("%d non � un numero primo.\n", num);
        }
    }

    return 0;
}

//SOL non compila neanche aggiungendo la libreria

