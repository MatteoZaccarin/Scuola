// Zanardo Gioele 4DIT 
//Scrivi un programma in c che accetti una lista di interi e indentifichi quali numeri sono primi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int num, i, divisore, primo;
	printf("I numeri primi sono:");
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		primo=0;
		for(divisore=2; divisore<(num/2); divisore++){
			if(num%divisore==0){
				primo++;
			}
			
		}
		if(primo==0)
			printf(" %d", num);
	}
}
	
