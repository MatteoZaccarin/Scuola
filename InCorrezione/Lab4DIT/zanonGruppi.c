//Gianluca Zanon 4 dit 23/11/2024
//es2
//L'HO FATTO CON UN SOLO PARAMETRO COME STRINGA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int num, gruppo, i;
	if(argc>1){
		for(i=1; i<argc; i++){
			num=atoi(argv[i]);
			if(num==0 && argv[i+1]==1){
				gruppo=gruppo+1;
			}
			if(num==1 && argv[i+1]==0){
				gruppo=gruppo+1;
			}
			if(num==1 && argv[i+1]==1){
				gruppo=gruppo+1; 
			}
			if(num==0 && argv[i+1]==0){
				gruppo=gruppo+1;
			}
		}
		printf("numero gruppi consecutivi: %d", gruppo);	
	}	
	return 0;
}
