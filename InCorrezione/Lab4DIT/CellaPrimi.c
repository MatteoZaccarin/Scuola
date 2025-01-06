//Alessandro Cella 4DIT
//Es 2 
//Si scriva un programma in C che accetti una lista di numeri come argomenti e tramite linea di comando
//identifichi quali numeri sono primi tra quelli forniti. Si assume che tutti gli argomenti siano interi positivi


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

	int i=1, valore=0, j=3; 
 	printf("i numeri primi sono: ");
	for(i=1; i<argc; i++)
	{
		valore=atoi(argv[i]);
		if(valore%2==0){} 
		else
		{
			for(j=3; j<valore; j++)
			{
				if(valore%j==0){}
	
			}
		if(valore!=j)
		{
		printf(" %d", valore);
		}
		
		}			
	}


	return 0;
}
