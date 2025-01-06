//Mattia Variola
//Es1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char*argv[]){
	if(argc>=2){
		int n=0;
		int num=0;
		int resto=0;
		int conta=0;
		int i=1;
		for(i=1;i<argc;i++){
			num=atoi(argv[i]);
			n=atoi(argv[i]);
			resto=num%2;
			num=num/2;
			conta++;
			printf("Numero %d, %d Bit necessari.\n", n, num);
		}
	}
	else
	{
		printf("Il numero di parametri e errato.");
	}
	return 0;
}
