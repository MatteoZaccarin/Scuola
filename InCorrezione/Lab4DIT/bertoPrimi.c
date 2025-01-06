//Berto Giada 4^DIT 19/11/2024
/*Si scriva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando 
e identifichi quali numeri sono primi tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<1)
		printf("nessun parametro inserito");
	else 
	{
		int i,j,p,n;
		printf("i numeri primi sono: \t");
		for(i=1;i<argc;i++)
		{
			p=0;
			n=atoi(argv[i]);
			for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
					p++;	//mi segna se è divisibile per qualche numero=non primo
			}
			if(p==0)
				printf("%d ", n);
		}
	}
	return 0;
}
