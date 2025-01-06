//Matteo Bottari 4^Dit 23/11/2024
//esercizio svolto con più parametri
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int numGruppi, i, n, numInizio, numFine;
	for(i=1; i<argc; i++)
	{
		n=atoi(argv[i]);
		numFine=atoi(argv[i+1]);
		if(i>1)
		{
			numInizio=atoi(argv[i-1]);	
		}
		if(n==0 && numInizio!=0)
		{
			numGruppi++;
		}
		if(n==1 && numInizio!=1)
		{
			numGruppi++;
		}
	}
	printf("Numeri di gruppi consecutivi tra loro: %d", numGruppi);
	return 0;
}

