//Cester Roberto  4dit
//es.1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int num, i, j, bit, divisore;
	
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		bit=0;
		divisore=num;
		
		while(divisore!=0){
		 	divisore=divisore/2;
		 	bit++;
		}
	
	if(num==0)
		bit=1;
	printf("Numero: %d, Bit necessari: %d \n", num, bit);
	}
	return 0;
	
}
