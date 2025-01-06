//Negoita Roberto Marian
/*Scrivi un programma che identifichi quali numeri siano primi tra quelli forniti. Salvarlo con negoitaPrimi*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
		int i, y, conta=0, a; //utilizzo i e y uno per contare e prendere ogni volta il valore del vettore dei parametri e y per verificare con il modulo se c'è resto 1 o 0
		int n=argc;
		printf("i numeri primi sono:");
		for(i=1;i<n;i++)
		{
			a=0;
			a=atoi(argv[i]);
			for(y=2;y<a/2+1;y++)
			{
				if(a%y==0)conta++;
			}
			if(conta==0)
			{
				printf(" %d", a);
			}
			conta=0;
		}
	return 0;
}
