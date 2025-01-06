//poiana sebastian 23.11.2024
/**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
	int n;
	bool cond;
	int contaBit;
	if(argc > 1){
		for(int i=1; i<argc; i++){
			cond=false;
			n=atoi(argv[i]);
			if(n < 0){
				printf("Hai inserito un valore negativo (%d)\n\n", n);
			}
			else{
				contaBit=1;
				int n1=n;
				while(n1 > 2){
					n1=n1/2;
					contaBit++;
				}
				printf("Numero: %d, Bit necessari: %d\n\n", n, contaBit);
			}
		}
	}
	return 0;
}
