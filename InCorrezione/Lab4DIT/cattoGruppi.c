//Catto Martina 4^DIT 23/11/2024
//Es 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	int num, grup=0, i, j;
	for(i=1; i<argc; i++){
		for(j=2; j<argc; j++){
		num=atoi(argv[i]);
		if(num==0){
			grup++;
		}
		else{
			if(num==1){
				grup++;
			}
		}
	}
	}
	printf("Numero di gruppi consecutivi: %d", grup);
	return 0;
}
