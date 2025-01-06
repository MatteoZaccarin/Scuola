//Antonio Dametto 4^dit 19/11/2024
//es.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]){
	if(argc>1){
		printf("il programma controllala media della lunghezza delle stringhe bel vettore argv[]");
		float media=0;
		int i=1,conta;
		for(i;i<argc;i++){
			media+=strlen(argv[i]);
			printf("stringan%d.%s,i,argv[i]");
			conta++;
			
		}
		printf("la media e'%.1f",media/conta);
		
	}else{
		printf("errore sul paraMETRO");
	}
	
	
	return 0;
}
