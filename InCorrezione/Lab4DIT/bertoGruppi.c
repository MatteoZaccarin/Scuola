//Berto Giada 4^DIT 23/11/2024
/*ho usato più parametri*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	if(argc<1)
		printf("non e' stato inserito nessun parametro");
	
	else
	{
		int i, cont=0;
		for(i=1;i<argc;i++)
		{
			if(atoi(argv[i])== 0 || atoi(argv[i])== 1)	//controlla che i parametri siano 0 o 1
			{
				if(atoi(argv[i]) == atoi(argv[i+1]))
					cont++;	
			}
		}
		printf("numero di gruppi consecutivi: %d", cont);
	}
	
	return 0;
}
