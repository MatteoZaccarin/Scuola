# File di BizuGrupppi.c

## Contenuto di BizuGrupppi.c

//Sem Bizu
/*ES 2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<2)
	{
		printf("numero di argomenti errati");
	}
	else
	{
		int nSequenze=0;
		int sequenza=1;
		
		for(int i=1; i<argc; i++)
		{
			int n1=atoi(argv[i]);
			
			if(n1==0 || n1==1)
			{
				if(n1==atoi(argv[i+1]))
				{
					sequenza++;
				}
					
				else
				{
					if(sequenza>=1)
					{
						nSequenze++;
						sequenza=1;
					}
						
				}
			}
		}
		if(nSequenze==0)
			printf("nessun 1 o 0 e' stato inserito");
		
		else
			printf("numero di gruppi consecutivi: %d", nSequenze);
	}
	
	return 0;
}
