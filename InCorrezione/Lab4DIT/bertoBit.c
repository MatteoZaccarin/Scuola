//Berto Giada 4^DIT 23/11/2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	if (argc<2)
		printf("non e' presente nessun parametro");
	
	else
	{
		int i;
		for(i=1;i<argc;i++)
		{
			int n=atoi(argv[i]);
			
			if (argv[i]<0)	//verifico se il numero è negativo
				printf("e' stato inserito un numero negativo");
				
			else
			{
				int cont=0;
				while (n!=0)
				{
					n=n/2;
					cont ++;
				}
				printf("numero %d, bit necessari %d\n", atoi(argv[i]), cont);
			}
			
		}
	}
	
	return 0;
}
