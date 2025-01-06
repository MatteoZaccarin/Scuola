//Gianluca Zanon 4 dit es2
/*si scriva in c un programma che accetti una lista di numeri interi come argomenti tramite 
linea di comando e identifivhi quali numeri sono primi tra quelli forniti*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int nprimo, resto, n, i;
	if(argc>=2){
		printf("i numeri primi sono: ");
		for(i=1; i<argc; i++){
			n=atoi(argv[i]);
			if(n==2){
				printf("%d ", n);
			}
			if(n==3){
				printf("%d ", n);
			}
			resto=n%2;
			if(resto!=0){
				printf("%d ", n);
			}
		}	
	}
	return 0;
}
