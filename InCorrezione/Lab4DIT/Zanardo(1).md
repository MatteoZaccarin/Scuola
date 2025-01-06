# File di Zanardo

## Contenuto di ZanardoBit.c

//Zanardo Gioele 4DIT
//ES1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int num, bit, i, j, fine;
	float diviso;
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		fine=0;
		bit=0;
		diviso=num;
		if(num>2){
			for(j=0; j<num; j++){
			while(fine==0){
				diviso=diviso/2;
			if(diviso<=1){
				fine++;
			}
			else{
				bit++;
			}
			}
		}
		if(num%2==0){
			bit++;
		}
		}
		else
			bit=0;
		if(num>0){
			printf("\n numero: %d, Bit necessari %d", num, bit+1);
		}
		
	}
	return 0;
}
