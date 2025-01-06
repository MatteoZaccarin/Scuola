//Fall Sergine Khadim 4DIT 23/11/2024
//es1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	if(argc>1){
    	int nbit,i=1;	
		for(i;i<argc;i++){
			nbit=0;
			int num=atoi(argv[i]);
			while(num>=0){
				nbit++;
				num=num-2;
			}
			printf("numero: %d, bit necessari: %d\n", atoi(argv[i]), nbit);
		}	
		}else{
		printf("errore nei parametri");	
	}		
	return 0;
}

