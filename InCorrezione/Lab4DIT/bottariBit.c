//Matteo Bottari 4^Dit 23/11/2024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int n, bit, i, y, stop;
	float divisione;
	for(i=1; i<argc; i++)
	{
		n=atoi(argv[i]);
		stop=0;
		bit=0;
		divisione=n;
		if(n>=0)
		{
		for(y=0; y<n; y++)
		{
			while(stop==0)
			{
			divisione=divisione/2;
			if(divisione<=1)
			{
				stop++;
			}
			else
			{
				bit++;
			}
			}			
		}
		if(n%2==0)
		{
			bit++;
		}
		}
		else
			bit=0;
		if(n>0)
		{
			printf("Numeri: %d, Bit necessari %d \n", n, bit+1);	
		}
	}
	return 0;
}

