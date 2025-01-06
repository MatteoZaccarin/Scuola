//Catto Martina 4^DIT 23/11/2024
//Es 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	int n, i, conta=0, ris=0;
	for(i=1; i<argc; i++){
		n=atoi(argv[i]);
		if(n>0){
			while(n!=0 && n>0){
				ris=n/2;
				conta++;
			}
			printf("\n Per il numero %d ho bisogno di %d bit", n, conta);
			conta=0;
			ris=0;
		}
		i++;
	}
	return 0;
}
