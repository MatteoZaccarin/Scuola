//Aldea Robert 4^DIT
/*	
	Esercizio 2 Programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando e 
	identifichi quali numeri sono primi tra quelli forniti. 
	Si assume che tutti gli argomenti siano interi positivi. 
	Salvare file AldeaPrimi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<=1) // Controllo se sono stati passati argomenti alla linea di comando
	{
		printf("ERRORE INSERIMENTO PARAMETRI \n");
		return 0;
	}else
	{
		float arr[argc-1]; // Dichiarazione di un array di float per memorizzare i numeri passati
		int i, contaD, Divisore=2;
		for(i=0; i<argc; i++) // Ciclo per verificare se ogni numero è primo
		{
			arr[i]=atoi(argv[i+1]);
			if(arr[i]<0 && arr[i]%0.1 != 0){
				printf("\nInserimento di un valore negativo e negativo \n");
				return 0;
			}
		}
		
		printf("\nI valori primi inseriti: ");
		for(i=0; i<argv; i++){
			while(Divisore<=arr[i]/2 && contaD==0)
			{
				Divisore++;
			}
			
			if(contaD==0) // Se contaD rimane 0, il numero è primo (non è stato trovato alcun divisore)
			{
				printf("%d", (int) arr[i]);
			}
		}
	}
	return 0;
}





