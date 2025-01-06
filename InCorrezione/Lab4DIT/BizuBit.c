//Sem Bizu
/*ES 1*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc>1)
	{
		int j;
		int i=0;
		int resto;
		
		for(j=1; j<argc; j++)
		{
			i=0;
			int n=atoi(argv[j]);
			while(n!=0)
			{
				n/=2;
				i++;
			}
			printf("numero: %d, bit necessari: %d\n", atoi(argv[j]), i);
		}
	}
	else
	{
		printf("numero di parametri errati");
	}
	return 0;
}
