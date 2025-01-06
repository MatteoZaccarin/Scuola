//Mauro La Ferlita
//Es 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, num, conta=0;
	for(i=1; i<argc; i++)
	{
		num=atoi(argv[i]);
		if(num>=0)
		{
			printf("Numero %d, ", num);
			if(num!=0)
				num/=2;
			else
				num=1;
			printf("Bit necessari: %d\n", num);
			conta++;	
		}
		
	}
	if(conta==0)
	{
		printf("Nessun numero valido");
	}	
	return 0;
}

