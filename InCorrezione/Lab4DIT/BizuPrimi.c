//Sem Bizu 19.11.2024
/*Si sciva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quali numero sono primi tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc<3)
	{
		printf("numero di parametri errato");
	}
	else
	{
		printf("i numeri primi sono: ");
		for(int i=1; i<argc; i++)
		{
			int n=atoi(argv[i]);
			//printf("\t%d", n);
			int primo=0;
			
			for(int j=2; j<n/2; j++)
			{
				if(n%j==0)
					primo++;
			}
			
			if(primo==0)
				printf("%d ", n);
		}
	}
	
	return 0;
}
