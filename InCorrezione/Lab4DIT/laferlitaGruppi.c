//Mauro La Ferlita
//Es 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, j=2, contaGruppo=0, presenza=0;
	for(i=1; i<argc; i++)
	{
		presenza=0;
		if(atoi(argv[i])==1 || atoi(argv[i])==0)
		{
			presenza=1;
			while(atoi(argv[i])==atoi(argv[j]))
			{
				contaGruppo++;
				j++;
			}
			
		}
	}
	if(presenza==1)
		printf("Numero di gruppi consegutivi: %d", contaGruppo);
	else
		printf("Nella stringa non e presente ne 1 ne 0");
	return 0;
}

